#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        long total(1);
        for(long p = 0; p < n; p++){
            long b; scanf("%ld", &b);
            total += (a[p] > b ? (a[p] - b) : 0);
        }

        printf("%ld\n", total);
    }

}
