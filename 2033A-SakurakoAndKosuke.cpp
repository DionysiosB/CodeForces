#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        n = (n > 0 ? n : -n);
        puts(n % 2 ? "Kosuke" : "Sakurako");
    }

}
