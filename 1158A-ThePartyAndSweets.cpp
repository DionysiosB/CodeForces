#include <cstdio>
typedef long long ll;

int main(){

    ll n, m; scanf("%lld %lld", &n, &m);
    ll sb(0), mxbA(0), mxbB(0), sg(0), mng(1e9);
    for(ll p = 0; p < n; p++){
        ll b; scanf("%lld", &b);
        sb += b;
        if(b >= mxbA){mxbB = mxbA; mxbA = b;}
        else if(b >= mxbB){mxbB = b;}
    }
    for(ll p = 0; p < m; p++){
        ll g; scanf("%lld", &g);
        sg += g;
        if(g <= mng){mng = g;}
    }

    if(mxbA > mng){puts("-1");}
    else if(mxbA == mng){
        ll ans = m * (sb - mxbA) + sg;
        printf("%lld\n", ans);
    }
    else if(mxbA < mng){
        ll ans = sb * m + sg - (m - 1) * mxbA - mxbB;
        printf("%lld\n", ans);
    }
    
    return 0;
}
