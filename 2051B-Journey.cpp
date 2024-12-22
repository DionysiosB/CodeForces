#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, a, b, c; scanf("%ld %ld %ld %ld", &n, &a, &b, &c);
        long s(a + b + c);
        long t = 3 * (n / s); n %= s;
        if(0 < n && n <= a){++t;}
        else if(a < n && n <= a + b){t += 2;}
        else if(n > a + b){t += 3;}
        
        printf("%ld\n", t);
    }
    
}
