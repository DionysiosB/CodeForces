#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

struct prob{ll a, t, r;};
bool cmp(prob A, prob B){return A.t < B.t;}

std::vector<prob> check(const std::vector<prob> v, const ll T, const ll s){

    ll rt(T), cnt(0);
    std::vector<prob> res;
    for(long p = 0; p < v.size(); p++){
        if(v[p].a < s){continue;}
        if(v[p].t > rt){break;}
        ++cnt; rt -= v[p].t; res.push_back(v[p]);
        if(cnt >= s){break;}
    }

    return res;
}

int main(){

    ll n, T; scanf("%lld %lld", &n, &T);
    std::vector<prob> v(n);
    for(long p = 0; p < n; p++){scanf("%lld %lld", &v[p].a, &v[p].t); v[p].r = p + 1;}
    sort(v.begin(), v.end(), cmp);

    ll left(0), right(n);
    std::vector<prob> solve;
    while(left <= right){
        ll mid = (left + right) / 2;
        std::vector<prob> cand = check(v, T, mid);
        if(cand.size() >= mid){solve = cand; left = mid + 1;}
        else{right = mid - 1;}
    }

    printf("%ld\n%ld\n", solve.size(), solve.size());
    for(long p = 0; p < solve.size(); p++){printf("%lld ", solve[p].r);}
    puts("");

    return 0;
}
