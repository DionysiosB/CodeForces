#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    ll n, m; scanf("%lld %lld", &n, &m);
    ll sa(0), td(0);
    std::vector<ll> d(n);
    for(ll p = 0; p < n; p++){
        ll a, b; scanf("%lld %lld", &a, &b);
        sa += a; td += (a - b); d[p] = a - b;
    }
    
    if(sa <= m){puts("0"); return 0;}
    else if(m < sa - td){puts("-1"); return 0;}
    else{
        sort(d.rbegin(), d.rend());
        ll cnt(0);
        for(ll p = 0; p < n; p++){
            sa -= d[p];
            if(sa <= m){cnt = p + 1; break;}
        }

        printf("%lld\n", cnt);
    }

    return 0;
}
