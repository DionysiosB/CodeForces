#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        std::vector<long> h(n, 0); h[1] = 1;
        long idx(0);
        for(long p = 2; p < n; p++){
            if(a[p] < a[p - 1]){++idx;}
            h[p] = h[idx] + 1;
        }

        printf("%ld\n", h.back());
    }

    return 0;
}
