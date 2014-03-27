#include <cstdio>
#include <iostream>

int main(){

    long r(0), g(0), b(0); scanf("%ld %ld %ld", &r, &g, &b);
    long total = r/3 + g/3 + b/3;
    if(r >= 1 && g >= 1 && b >= 1){total = std::max(total , 1 + (r - 1)/3 + (g - 1)/3 + (b - 1)/3);}
    if(r >= 2 && g >= 2 && b >= 2){total = std::max(total , 2 + (r - 2)/3 + (g - 2)/3 + (b - 2)/3);}
    printf("%ld\n", total);
    return 0;
}
