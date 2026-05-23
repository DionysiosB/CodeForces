#include <cstdio>

int main(){

    long n, m; scanf("%ld %ld\n", &n, &m);
    if(n == 1){puts("1");}
    else{printf("%ld\n", (m <= n/2) ? (m + 1) : (m - 1));}

    return 0;
}
