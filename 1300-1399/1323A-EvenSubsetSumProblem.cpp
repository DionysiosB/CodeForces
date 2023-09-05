#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        if(n <= 1){
            long x; scanf("%ld", &x);
            puts((x & 1) ? "-1" : "1\n1");
        }
        else{
            long a; scanf("%ld", &a);
            long b; scanf("%ld", &b);
            for(long p = 2; p < n; p++){long x; scanf("%ld", &x);}
            if((a & 1) && (b & 1)){printf("2\n1 2\n");}
            else{printf("1\n%d\n", (a & 1) ? 2 : 1);}
        }
    }

    return 0;
}
