#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        std::vector<ll> c(n); for(ll p = 0; p < n; p++){scanf("%lld", &c[p]);}
        std::vector<ll> a(n); for(ll p = 0; p < n; p++){scanf("%lld", &a[p]);}
        std::vector<ll> b(n); for(ll p = 0; p < n; p++){scanf("%lld", &b[p]);}

        ll sofar(0), res(0);
        for(ll p = 1; p < n; p++){
            ll diff = a[p] - b[p]; if(diff < 0){diff = -diff;}
            ll cur = c[p] + 1 + diff;
            if(diff > 0){
                ll tmp = (sofar - diff) + c[p] + 1;
                cur = (cur > tmp) ? cur : tmp;
            }

            res = (res > cur) ? res : cur;
            sofar = cur;
        }

        printf("%lld\n", res);
    }

}
