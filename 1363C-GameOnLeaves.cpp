#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, x; scanf("%ld %ld", &n, &x);
        long deg(0);
        for(long p = 1; p < n; p++){
            long a, b; scanf("%ld %ld", &a, &b);
            if(a == x || b == x){++deg;}
        }

        puts((deg <= 1 || n % 2 == 0) ? "Ayush" : "Ashish");
    }

    return 0;
}
