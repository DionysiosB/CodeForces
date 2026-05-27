#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){a[p] = p + 1;}
        printf("%ld\n", n);
        for(long p = 0; p < n; p++){printf("%ld ", a[p]);}; puts("");
        for(long p = 1; p < n; p++){
            long tmp = a[p]; a[p] = a[p - 1]; a[p - 1] = tmp;
            for(long p = 0; p < n; p++){printf("%ld ", a[p]);}
            puts("");
        }

    }

}
