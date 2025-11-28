#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long long s(-(n - 1)), cnt(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            s += x;
            cnt += (x > 0);
        }
        
        printf("%ld\n", (s < cnt ? s : cnt));
    }
    
}
