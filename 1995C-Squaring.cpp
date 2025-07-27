#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        std::vector<ll> a(n); for(ll p = 0; p < n; p++){scanf("%lld", &a[p]);}

        bool possible(true);
        for(ll p = 1; possible && p < n; p++){
            if(a[p - 1] > 1 && a[p] == 1){possible = false;}
        }
        if(!possible){puts("-1"); continue;}

        ll cnt(0), prev(0);
        for(ll p = 1; p < n; p++){
            ll num(prev);
            ll x(a[p - 1]), y(a[p]);
            while(x > 1 && x * x <= y){x *= x; --num;}
            while(y < x){y *= y; ++num;}
            num = (num > 0 ? num : 0);
            cnt += num;
            prev = num;
        }

        printf("%lld\n", cnt);
    }

}
