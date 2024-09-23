#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        long odd = ( (k + (n % 2)) / 2) % 2;
        puts(odd ? "NO" : "YES");
    }

}
