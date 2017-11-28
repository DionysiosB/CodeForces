#include <cstdio>

int main(){

    long n; scanf("%ld", &n);
    int rem(0);
    while(n--){
        long x; scanf("%ld", &x);
        x -= rem;
        if(x < 0){break;}
        rem = x % 2;
    }

    puts(rem ? "NO" : "YES");

    return 0;
}
