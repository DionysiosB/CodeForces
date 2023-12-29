#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<ll> a(n); for(ll p = 0; p < n; p++){scanf("%lld", &a[p]);}
        std::vector<ll> b(n); for(ll p = 0; p < n; p++){scanf("%lld", &b[p]);}

        std::vector<std::pair<ll, ll> > s(n);
        for(long p = 0; p < n; p++){s[p].first = a[p] + b[p]; s[p].second = p;}
        sort(s.rbegin(), s.rend());


        /*
        for(long p = 0; p < n; p++){printf("%lld ", a[p]);}; puts("");
        for(long p = 0; p < n; p++){printf("%lld ", b[p]);}; puts("");
        for(long p = 0; p < n; p++){printf("%lld->%lld ", s[p].second, s[p].first);}; puts("");
        */


        ll res(0);
        for(long p = 0; p < n; p++){
            long idx = s[p].second;
            if(p % 2){res -= (b[idx] - 1);}
            else{res += a[idx] - 1;}
        }

        printf("%lld\n", res);
    }

}
