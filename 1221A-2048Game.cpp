#include <cstdio>
#include <vector>

int main(){
   
    const long D = 12;
    long q; scanf("%ld", &q);
    while(q--){
        std::vector<long> a(D, 0);
        long n; scanf("%ld", &n);
        while(n--){
            long x; scanf("%ld", &x);
            for(long p = 0; x && p < D; x /= 2, p++){if(x == 1){++a[p];}}
        }
       
        for(long p = 1; p < D; p++){a[p] += a[p - 1] / 2;}
        puts(a.back() ? "YES" : "NO");
    }
   
    return 0;
}
