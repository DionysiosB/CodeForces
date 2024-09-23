#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        std::vector<ll> a(n); ll s(0);
        for(ll p = 0; p < n; p++){
            scanf("%lld", &a[p]);
            s += a[p];
        }

        if(n <= 2){puts("-1"); continue;}
        sort(a.begin(), a.end());
        ll res = 2 * n * a[n / 2] - s + 1;
        res = (res > 0 ? res : 0);
        printf("%lld\n", res);
    }

}
