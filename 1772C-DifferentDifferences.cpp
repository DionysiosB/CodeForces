#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long k, n; scanf("%ld %ld", &k, &n);
        std::vector<long> a(k + 1); a[1] = 1;
        long d(1);
        for(long p = 2; p <= k; p++){
            if(d < 0){a[p] = a[p - 1] + 1; continue;}
            long x = a[p - 1] + d;
            if(n - x < k - p){a[p] = a[p - 1] + 1; d = -1;}
            else{a[p] = x; ++d;}
        }

        for(long p = 1; p <= k; p++){printf("%ld ", a[p]);}
        puts("");
    }

}
