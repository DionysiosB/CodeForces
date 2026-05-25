#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long m(0); while(n % 2 == 0){n /= 2; ++m;}
        bool q(false); for(long p = 2; p * p <= n; p++){if(n % p == 0){q = true; break;}}
        puts(((n == 1 && m != 1) || (n != 1 && m == 1 && !q)) ? "FastestFinger" : "Ashishgup");
    }

    return 0;
}
