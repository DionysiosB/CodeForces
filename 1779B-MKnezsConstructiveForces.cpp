#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        if(n == 3){puts("NO"); continue;}
        else{
            puts("YES");
            if(n % 2){
                long a(n/2 - 1), b(-n/2);
                for(long p = 0; p < n; p++){printf("%ld ", p % 2 ? b : a);}
            }
            else{for(long p = 0; p < n; p++){printf("%ld ", 1 - 2 * (p % 2));}}
            puts("");
        }
    }

}
