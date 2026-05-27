#include <cstdio>

int main(){
    
    long t; scanf("%ld", &t);
    while(t--){

        long n; scanf("%ld", &n);
        long long res(0);
        long x(0), mx(0);
        for(long p = 0; p < n; p++){scanf("%ld", &x); res += x;}
        for(long p = 0; p < n; p++){scanf("%ld", &x); res += x; mx = (mx > x) ? mx : x;}
        res -= mx;
        printf("%lld\n", res);
    }

}
