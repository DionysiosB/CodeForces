#include <cstdio>

int main(){

    long n(0); scanf("%ld", &n);
    const int a = 4;
    const long modNumber = 1000000007;

    long long f(0), g(0), fPrev(0), gPrev(1);
    for(long k = 2; k <= n; k++){
        
        f =  (a - 1) * gPrev;          
        g = fPrev + (a - 2) * gPrev;    
        
        f %= modNumber;
        g %= modNumber;
        
        fPrev = f;
        gPrev = g;
    }

    printf("%lld\n", f);
}
