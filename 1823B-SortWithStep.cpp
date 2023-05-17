#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        long bad(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            --x; bad += (x % k != p % k);
        }

        if(bad == 0){puts("0");}
        else if(bad == 2){puts("1");}
        else{puts("-1");}
    }

}
