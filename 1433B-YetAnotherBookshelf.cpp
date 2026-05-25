#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long inside(0), cur(0), cnt(0);
        for(long p = 0; p < n; p++){
            long a; scanf("%ld", &a);
            if(a){inside = 1; cnt += cur; cur = 0;}
            else{cur += inside;}
        }

        printf("%ld\n", cnt);
    }

    return 0;
}
