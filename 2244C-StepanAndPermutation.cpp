#include <cstdio>

long gcd(long a, long b){return a ? gcd(b % a, a) : b;}

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, x, y; scanf("%ld %ld %ld", &n, &x, &y);
        long g = gcd(x, y); 
        bool res(true);
        for(long p = 0; p < n; p++){
            long a; scanf("%ld", &a);
            if(a % g != (p + 1) % g){res = false;}
        }

        puts(res ? "YES" : "NO");
    }

}
