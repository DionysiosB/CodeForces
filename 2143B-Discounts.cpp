#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        std::vector<long> b(k); for(long p = 0; p < k; p++){scanf("%ld", &b[p]);}

        sort(a.rbegin(), a.rend());
        sort(b.begin(), b.end());

        long idx(-1);
        for(long p = 0; p < k; p++){
            if(idx + b[p] >= n){break;}
            idx += b[p];
            a[idx] = 0;
        }

        long long cost(0);
        for(long x : a){cost += x;}
        printf("%lld\n", cost);
    }

}
