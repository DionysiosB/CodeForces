#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        if(n == 3){puts("-1");}
        else{
            for(long p = 3; p <= n; p++){printf("%ld ", p);}
            puts("2 1");
        }
    }

}
