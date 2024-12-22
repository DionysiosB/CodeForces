#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        std::vector<long> b(n); for(long p = 0; p < n; p++){scanf("%ld", &b[p]);}
        long res(a.back());
        for(long p = 0; p + 1 < n; p++){
            long diff = (a[p] - b[p + 1]);
            res += (diff > 0 ? diff : 0);
        }
        
        printf("%ld\n", res);
    }
    
}
