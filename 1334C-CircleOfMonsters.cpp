#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        std::vector<ll> a(n), b(n);
        for(long p = 0; p < n; p++){scanf("%lld %lld", &a[p], &b[p]);}
        ll s(0), carry(0);
        for(ll p = 0; p < n; p++){
            ll tmp = (a[p] > carry) ? (a[p] - carry) : 0;
            s += tmp;
            carry = b[p];
        }


        ll cur(s), mn(s);
        for(ll p = 1; p < n; p++){
            ll x = (a[p] < b[(n + p - 1) % n]) ? a[p] : b[(n + p - 1) % n];
            ll y = (b[(n + p - 2) % n] < a[(n + p - 1) % n]) ? b[(n + p - 2) % n] : a[(n + p - 1) % n];
            cur += x - y;
            mn = (mn < cur) ? mn : cur;
        }

        printf("%lld\n", mn);
    }

    return 0;
}
