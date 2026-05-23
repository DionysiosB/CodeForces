#include <cstdio>

int main(){

    long n(0), x(0); scanf("%ld %ld\n", &n, &x);
    long total(0);
    while(n--){long temp(0); scanf("%ld", &temp); total += temp;}
    if(total < 0){total = -total;}

    long output = total / x; 
    if(total % x != 0){++output;}
    printf("%ld\n", output);

    return 0;
}
