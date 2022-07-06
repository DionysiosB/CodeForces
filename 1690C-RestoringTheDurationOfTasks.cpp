#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> s(n); for(long p = 0; p < n; p++){scanf("%ld", &s[p]);}
        std::vector<long> f(n); for(long p = 0; p < n; p++){scanf("%ld", &f[p]);}
        for(long p = 0; p < n; p++){
            long prev = (p > 0) ? f[p - 1] : s[0];
            long start = (prev > s[p]) ? prev : s[p];
            printf("%ld ", f[p] - start);
        }
        puts("");
    }

}
