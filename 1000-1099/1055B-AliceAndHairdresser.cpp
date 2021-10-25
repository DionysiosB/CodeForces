#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll n, m, l; scanf("%lld %lld %lld", &n, &m, &l);
    std::vector<ll> a(n); for(ll p = 0; p < n; p++){scanf("%lld", &a[p]);}
    ll cnt(0);
    for(ll p = 0; p < n; p++){
        if(a[p] <= l){continue;}
        if(p == 0 || a[p - 1] <= l){++cnt;}
    }

    while(m--){
        ll t; scanf("%lld", &t);
        if(t){
            ll x, d; scanf("%lld %lld", &x, &d);
            a[--x] += d;
            if(l < a[x] && a[x] <= l + d){
                if(  ((x == 0) ||  ((x > 0) && (a[x - 1] <= l))) && ((x == n - 1) || ((x + 1 < n) && (a[x + 1] <= l)))    ){++cnt;}
                if((x > 0) && (a[x - 1] > l) && (x + 1 < n) && (a[x + 1] > l)){--cnt;}
            }

        }
        else{printf("%lld\n", cnt);}
    }

    return 0;
}
