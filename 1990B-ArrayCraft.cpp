#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, x, y; scanf("%ld %ld %ld", &n, &x, &y);
        for(long p = 1; p <= n; p++){
            if(p < y){printf("%d ", (p % 2 == y % 2 ? 1 : -1));}
            else if(p <= x){printf("1 ");}
            else{printf("%d ", (p % 2 == x % 2 ? 1 : -1));}
        }
        puts("");
    }

}
