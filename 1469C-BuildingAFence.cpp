#include <cstdio>
#include <algorithm>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        ll n, k; scanf("%lld %lld", &n, &k);
        ll x; scanf("%lld", &x);
        ll lower(x), upper(x);
        bool possible(true);

        for(long p = 1; p < n; p++){
            scanf("%lld", &x);
            lower = std::max(lower - k + 1, x);
            upper = std::min(upper + k - 1, x + k - 1);
            if(upper < x || lower > x + k - 1){possible = false;}
        }

        if(lower != x){possible = false;}
        puts(possible ? "YES" : "NO");

    }

}
