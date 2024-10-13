#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        for(long p = 0; p < n && k > 0; p++){
            long x = (k < a[p]) ? k : a[p];
            k -= x; a[p] -= x; a.back() += x;
        }
        for(long p = 0; p < n; p++){printf("%ld ", a[p]);}
        puts("");
    }

}
