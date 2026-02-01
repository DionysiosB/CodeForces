#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long m((n + 1) / 2);
        printf("%ld ", m);
        for(long p = 1; p < n; ++p){
            if(p % 2){printf("%ld ", m + (p + 1) / 2);}
            else{printf("%ld\n", m - p / 2);}
        }
        puts("");

    }

}
