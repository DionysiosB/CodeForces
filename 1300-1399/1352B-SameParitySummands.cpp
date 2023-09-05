#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        if((n % 2 == k % 2) && (n >= k)){
            puts("YES");
            for(long p = 1; p < k; p++){printf("1 ");}
            printf("%ld\n", n - k + 1);
        }
        else if((n % 2 == 0) && (n >= 2 * k)){
            puts("YES");
            for(long p = 1; p < k; p++){printf("2 ");}
            printf("%ld\n", n - 2 * k + 2);
        }
        else{puts("NO");}
    }

    return 0;
}
