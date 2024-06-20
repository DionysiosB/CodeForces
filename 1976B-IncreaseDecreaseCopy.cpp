#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        std::vector<long> b(n); for(long p = 0; p < n; p++){scanf("%ld", &b[p]);}
        long z; scanf("%ld", &z);

        long long total(1); long f(2e9 + 7);
        for(long p = 0; p < n; p++){
            long x = (a[p] < b[p] ? a[p] : b[p]);
            long y = (a[p] > b[p] ? a[p] : b[p]);
            total += (y - x);
            if(z < x){f = (f < (x - z) ? f : (x - z));}
            else if(z > y){f = (f < (z - y) ? f : (z - y));}
            else{f = 0;}
        }

        total += f;
        printf("%lld\n", total);
    }

}
