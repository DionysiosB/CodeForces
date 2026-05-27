#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m; scanf("%ld %ld", &n, &m);
        if(n > m){puts("NO"); continue;}
        else if(n % 2 == 0 && m % 2){puts("NO"); continue;}
        else if(n == 1){printf("YES\n%ld\n", m);continue;}
        puts("YES");
        for(long p = 0; p < n - 2; p++){printf("1 ");}
        if(n % 2){printf("1 %ld\n", m - n + 1);}
        else{printf("%ld %ld\n", (m - n + 2) / 2, (m - n + 2) / 2);}
    }

}
