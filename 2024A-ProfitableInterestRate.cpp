#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b; scanf("%ld %ld", &a, &b);
        long res(0);
        if(a >= b){res = a;}
        else if(2 * a >= b){res = 2 * a - b;}
        printf("%ld\n", res);
    }

}
