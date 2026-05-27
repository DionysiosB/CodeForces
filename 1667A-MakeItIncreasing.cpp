#include<cstdio>
#include <vector>
typedef long long ll;

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}

    ll mncnt(1e18);
    for(ll p = 0; p < n; p++){
        ll cnt(0), prev(0);
        for(ll q = p - 1; q >= 0; q--){
            ll mult = 1 + (prev / a[q]);
            prev = mult * a[q];
            cnt += mult;
        }

        prev = 0;
        for(ll q = p + 1; q < n; q++){
            ll mult = 1 + (prev / a[q]);
            prev = mult * a[q];
            cnt += mult;
        }

        mncnt = (mncnt < cnt ? mncnt : cnt);
    }

    printf("%lld\n", mncnt);
}
