#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x; scanf("%ld", &x);
        long w(x), z(1);
        while(w){z *= 10; w /= 10;}
        printf("%ld\n", z + 1);
    }

}
