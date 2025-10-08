#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        std::vector<ll> h(n); for(ll p = 0; p < n; p++){scanf("%lld", &h[p]);}
        ll res(0);
        if(n % 2){
            for(ll p = 1; p < n; p += 2){
                ll target = 1 + ((h[p - 1] > h[p + 1]) ? h[p - 1] : h[p + 1]);
                ll diff = target - h[p];
                res += (diff > 0) * diff;
            }
        }
        else{
            std::vector<ll> u(n, 0), v(n, 0);
            for(ll p = 1; p + 1 < n; p += 2){
                ll target = 1 + ((h[p - 1] > h[p + 1]) ? h[p - 1] : h[p + 1]);
                ll diff = target - h[p];
                u[p] = u[p - 1 - (p >= 2)] + (diff > 0) * diff;
            }
            for(ll p = n - 2; p >= 1; p -= 2){
                ll target = 1 + ((h[p - 1] > h[p + 1]) ? h[p - 1] : h[p + 1]);
                ll diff = target - h[p];
                v[p] = v[p + 1 + (p + 2 < n)] + (diff > 0) * diff;
            }

            ll cur = (u[n - 3] < v[2]) ? u[n - 3] : v[2];

            for(ll p = 2; p + 2 < n; p += 2){
                ll tst = u[p - 1] + v[p + 2];
                cur = (cur < tst) ? cur : tst;
            }

            res = cur;
        }
            

        printf("%lld\n", res);
    }
}
