#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        if(k == 1){for(long p = 1; p <= n; p++){printf("%ld ", p);}; puts("");}
        else if(k == n){for(long p = 1; p <= n; p++){printf("1 ");}; puts("");}
        else{puts("-1");}
    }

}
