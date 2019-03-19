#include <cstdio>

int main(){

    long n,m; scanf("%ld %ld", &n, &m);
    if(m > n){long tmp = m; m = n; n = tmp;}

    if(m == 1){printf("%ld\n", n);}
    else if(m == 2){printf("%ld\n", 2 * (2 * (n / 4) + ((n % 4) < 2 ? (n % 4) : 2)));}
    else{printf("%ld\n", m * n - (n * m) / 2);}

    return 0;
}
