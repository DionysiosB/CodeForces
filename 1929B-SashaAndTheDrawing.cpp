#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        long ans(2 * n);
        if(k <= 4 * n - 4){ans = (k + 1) / 2;}
        else if(k <= 4 * n - 3){ans = 2 * n - 1;}
        printf("%ld\n", ans);
    }

}
