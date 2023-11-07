#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, y, k; scanf("%ld %ld %ld", &x, &y, &k);
        long res(0);
        if(y <= x){res = x;}
        else if(x <= y && y <= x + k){res = y;}
        else{x += k; res = 2 * y - x;}
        printf("%ld\n",res);
    }

}
