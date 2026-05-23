#include <cstdio>

int main(){

    int temp(0), count(0); long total(0);
    while(scanf("%d", &temp) > 0){total += temp * (count++);}
    printf("%ld\n", total);

    return 0;
}
