#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n), v(n);
        for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        v[0] = a[0];
        for(long p = 1; p < n; p++){v[p] = (v[p - 1] > a[p] ? v[p - 1] : a[p]);}

        long long total(0);
        for(long p = 0; p < n; p += 2){
            long diff(-1);
            if(p){diff = std::max(diff, a[p] - v[p - 1]);}
            if(p + 1 < n){diff = std::max(diff, a[p] - v[p + 1]);}
            total += (diff + 1);
        }

        printf("%lld\n", total);
    }

}
