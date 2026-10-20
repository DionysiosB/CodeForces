#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long s(0);
        for(long p = 0; p < n; p++){
            long a; scanf("%ld", &a);
            s += (p % 2 ? -1 : 1) * a;
        }

        printf("%ld\n", s);
    }

}
