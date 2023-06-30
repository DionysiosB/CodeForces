#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k, x; scanf("%ld %ld %ld", &n, &k, &x);
        if(x != 1){
            printf("YES\n%ld\n", n);
            for(long p = 0; p < n; p++){printf("1 ");}
            puts("");
        }
        else if(k >= 2 && n % 2 == 0){
            printf("YES\n%ld\n", n / 2);
            for(long p = 0; p < n / 2; p++){printf("2 ");}
            puts("");
        }
        else if(k >= 3){
            printf("YES\n%ld\n3 ", (n / 2));
            for(long p = 1; p < n / 2; p++){printf("2 ");}
            puts("");
        }
        else{puts("NO"); continue;}
    }

}
