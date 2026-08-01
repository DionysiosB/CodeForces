#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        if(n == 1){puts("0"); continue;}
        else if(k >= n - 1){puts("-1"); continue;}

        k = n - k;
        int z((n + 1) / 2), a(n / 2);
        for(long p = 1; p <= k; p++){
            if(p & 1){
                if(k < p + 2){while(z--){printf("0");}}
                else{--z; printf("0");}
            }
            else{
                if(k < p + 2){while(a--){printf("1");}}
                else{--a; printf("1");}
            }
        }
        puts("");
    }

}
