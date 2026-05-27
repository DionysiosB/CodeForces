#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        long rem(0), cnt(0);
        for(long p = n - 1; p >= 0; p--){
            rem = (rem > a[p]) ? rem : a[p];
            a[p] = (rem > 0);
            --rem;
        }

        for(long p = 0; p < n; p++){printf("%ld ", a[p]);}
        puts("");
    }

}
