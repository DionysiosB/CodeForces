#include <cstdio>

long gcd (long a, long b){return (b == 0) ? a : gcd (b, a%b);}

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long g(0); 
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            g = gcd(g, x);
        }

        if(g == 1){puts("0");}
        else if(gcd(g, n) == 1){puts("1");}
        else if(gcd(g, n - 1) == 1){puts("2");}
        else{puts("3");}
    }

}
