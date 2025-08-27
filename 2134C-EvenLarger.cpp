#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        long long total(0);
        for(long p = 1; p < n; p += 2){
            if(a[p - 1] > a[p]){total += a[p - 1] - a[p]; a[p - 1] = a[p];}
            if(p + 1 >= n){continue;}
            if(a[p - 1] + a[p + 1] > a[p]){
                long diff = a[p - 1] + a[p + 1] - a[p];
                total += diff;
                a[p + 1] -= diff;
            }
        }

        printf("%lld\n", total);
    }

}
