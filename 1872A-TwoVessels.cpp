#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b, c; scanf("%ld %ld %ld", &a, &b, &c);
        if(a > b){long x = a; a = b; b = x;}
        long diff = (b - a + 1) / 2;
        long ans = (diff + c - 1) / c;
        printf("%ld\n", ans);
    }

}
