#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b, c; scanf("%ld %ld %ld", &a, &b, &c);
        if((a + b + c) % 2){puts("-1"); continue;}
        long x = (a + b + c) / 2;
        long y = a + b;
        printf("%ld\n", (x < y ? x : y));
    }

}
