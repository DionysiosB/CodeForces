#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, s; scanf("%ld %ld", &n, &s);
        printf("%ld\n", s / (n - (n - 1) / 2));
    }

}
