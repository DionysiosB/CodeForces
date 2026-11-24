#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        if(n < 4){puts("-1"); continue;}
        for(long p = 1; p <= n; p++){
            if(p == 1){printf("4 ");}
            else if(p == 4){printf("1 ");}
            else{printf("%ld ", p);}
        }
        puts("");

    }

}
