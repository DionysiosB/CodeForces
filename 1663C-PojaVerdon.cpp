#include <cstdio>

int main(){

    long n; scanf("%ld", &n);
    long s(0);
    for(long p = 0; p < n; p++){
        long x; scanf("%ld", &x);
        s += x;
    }
    
    printf("%ld\n", s);

}
