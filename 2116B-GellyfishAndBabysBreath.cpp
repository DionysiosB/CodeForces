#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    const ll MOD = 998244353;
    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        std::vector<ll> v(n, 1);
        for(ll p = 1; p < n; p++){v[p] = (2 * v[p - 1]) % MOD;}

        std::vector<ll> a(n); for(ll p = 0; p < n; p++){scanf("%lld", &a[p]);}
        std::vector<ll> b(n); for(ll p = 0; p < n; p++){scanf("%lld", &b[p]);}

        std::vector<ll> f(n);
        ll mxa(-1), mxb(-1), wa(-1), wb(-1);
        for(ll p = 0; p < n; p++){
            if(a[p] > mxa){mxa = a[p]; wa = p;}
            if(b[p] > mxb){mxb = b[p]; wb = p;}

            ll idxa(-1), idxb(-1);
            if(mxa > mxb){idxa = wa; idxb = p - wa;}
            else if(mxa < mxb){idxa = p - wb; idxb = wb;}
            else{
                int tsta = a[p - wb];
                int tstb = b[p - wa];
                if(tsta > tstb){idxa = p - wb; idxb = wb;}
                else{idxa = wa; idxb = p - wa;}
            }

            f[p] = (v[a[idxa]] + v[b[idxb]]) % MOD;
        }

        for(ll p = 0; p < n; p++){printf("%lld ", f[p]);}
        puts("");
    }

}
