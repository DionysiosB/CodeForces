#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        
        long n, w, h; scanf("%ld %ld %ld", &n, &w, &h);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        std::vector<long> b(n); for(long p = 0; p < n; p++){scanf("%ld", &b[p]);}

        long minshift(-1e9), maxshift(1e9);
        for(long p = 0; p < n; p++){
            long left  = (b[p] + h) - (a[p] + w);
            long right = (b[p] - h) - (a[p] - w);
            minshift = (minshift > left  ? minshift : left );
            maxshift = (maxshift < right ? maxshift : right);
        }

        puts(minshift <= maxshift ? "YES" : "NO");
    }

}
