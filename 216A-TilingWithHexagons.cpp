#include <cstdio>
#include <iostream>

int main(){
    long a,b,c; scanf("%ld %ld %ld", &a, &b, &c);
    long output = (c + a - 1)*(b + a - 1) - a*(a-1) ;
    printf("%ld\n", output);

    return 0;
}
