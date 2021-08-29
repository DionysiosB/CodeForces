#include <cstdio>
#include <cmath>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long s; scanf("%ld", &s);
        long n = sqrt(s);
        while(n * n < s){++n;}
        printf("%ld\n", n);
    }

}
