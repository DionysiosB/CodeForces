#include <cstdio>

int main(){

    long n; scanf("%ld", &n);
    long a, b, c; scanf("%ld %ld %ld", &a, &b, &c);

    if(n == 1){puts("0");}
    else{
        int d = (a < b) ? a : b;
        long total = d + (n - 2) * ((d < c) ? d : c);
        printf("%ld\n", total);
    }

    return 0;
}
