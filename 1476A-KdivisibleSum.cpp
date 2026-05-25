#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        if(n <= k){printf("%ld\n", (k + n - 1) / n);}
        else{printf("%d\n", 1 + (n % k > 0));}
    }

}
