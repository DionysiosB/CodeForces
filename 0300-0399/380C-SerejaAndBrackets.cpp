#include <iostream>
#include <vector>
typedef long long ll;

struct data{
    ll open, close, paired;
    void init(){open = close = paired = 0LL;}
};

struct segtree{
    ll sz; std::vector<data> f;

    void init(ll num){
        sz = 1; while(sz < num){sz *= 2;}
        data tmp; tmp.init();
        f.assign(2 * sz, tmp);
    }

    data merge(const data &a, const data &b){
        data ret;
        ret.open = a.open + b.open;
        ret.close = a.close + b.close;
        ll diffA = a.open - a.paired / 2; diffA = (diffA > 0LL) ? diffA : 0LL;
        ll diffB = b.close - b.paired / 2; diffB = (diffB > 0LL) ? diffB : 0LL;
        ret.paired = a.paired + b.paired + 2*((diffA < diffB) ? diffA : diffB);
        return ret;
    }

    void set(ll idx, data val){set(idx, val, 0, 0, sz);}
    void set(ll idx, data val, ll node, ll lv, ll rv){
        if(rv == lv + 1){f[node] = val; return;}
        ll mid = (lv + rv) / 2;
        if(idx < mid){set(idx, val, 2 * node + 1, lv, mid);}
        else{set(idx, val, 2 * node + 2, mid, rv);}
        f[node] = merge(f[2 * node + 1] , f[2 * node + 2]);
    }

    data getPaired(ll lq, ll rq){return getPaired(lq, rq, 0, 0, sz);}
    data getPaired(ll lq, ll rq, ll node, ll lv, ll rv){
        if(rq <= lv || rv <= lq){data tmp; tmp.init(); return tmp;}
        else if(lq <= lv && rv <= rq){return f[node];}
        else{
            ll mid = (lv + rv) / 2;
            data left = getPaired(lq, rq, 2 * node + 1, lv, mid);
            data right = getPaired(lq, rq, 2 * node + 2, mid, rv);
            return merge(left, right);
        }
    }
};


int main(){

    std::ios_base::sync_with_stdio(false);
    std::string s; std::cin >> s;
    segtree st; st.init(s.size());
    for(ll p = 0; p < s.size(); p++){
        data cur; cur.open = (s[p] == '('); cur.close = (s[p] == ')'); cur.paired = 0;
        st.set(p, cur);
    }

    ll m; std::cin >> m;
    while(m--){
        ll from, to; std::cin >> from >> to;
        data ans = st.getPaired(from - 1, to); 
        std::cout << ans.paired << std::endl;
    }

    return 0;
}
