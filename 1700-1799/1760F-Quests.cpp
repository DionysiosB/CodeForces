#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        ll n, c, d; scanf("%lld %lld %lld", &n, &c, &d);

        std::vector<ll> a(n);
        for(ll p = 0; p < n; p++){scanf("%lld", &a[p]);}
        sort(a.rbegin(), a.rend());

        std::vector<ll> cs(n + 1, 0);
        for(ll p = 1; p <= n; p++){cs[p] = cs[p - 1] + a[p - 1];}

        if(d * a[0] < c){puts("Impossible"); continue;}
        if(c <= cs[d < n ? d : n]){puts("Infinity"); continue;}


        ll res(0), left(1), right(d);
        while(left <= right){
            ll mid = (left + right) / 2;
            ll stopA = (mid <= n) ? mid : n;
            ll stopB = (d % mid <= n) ? (d % mid) : n;
            ll sum = (d / mid) * cs[stopA] + cs[stopB];
            if(c <= sum){res = mid; left = mid + 1;}
            else{right = mid - 1;}
        }

        printf("%lld\n", res - 1);
    }

}
