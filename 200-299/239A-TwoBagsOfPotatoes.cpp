#include <cstdio>

int main(){

    long y, k, n; scanf("%ld %ld %ld", &y, &k, &n);
    long a = (y % k); a = (k - a) % k;
    if(a == 0){a = k;}
    if(y + a > n){puts("-1");}
    else{while(y + a <= n){printf("%ld ", a); a += k;}}

    return 0;
}
