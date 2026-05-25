#include <cstdio>

int main(){

    long n; scanf("%ld", &n);
    long left(0), right(0);
    for(long p = 1; p <= n; p++){
        long x; scanf("%ld", &x);
        if(x == 0){left = p;}
        else{right = p;}
    }

    printf("%ld\n", left < right ? left : right);

    return 0;
}
