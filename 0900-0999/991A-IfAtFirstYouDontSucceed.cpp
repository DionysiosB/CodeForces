#include <cstdio>

int main(){

    long a, b, c, n; scanf("%ld %ld %ld %ld", &a, &b, &c, &n);
    long ans(0);
    if(c > a || c > b || c > a + b){ans = -1;}
    else if(1 + a + b - c > n){ans = -1;}
    else{ans = n - (a + b - c);}

    printf("%ld\n", ans);

    return 0;
}
