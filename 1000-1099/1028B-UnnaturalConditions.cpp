#include <cstdio>

int main(){

    long n, m; scanf("%ld %ld", &n, &m);
    long d = (n + 8) / 9;
    printf("9"); for(long p = 1; p < d; p++){printf("09");}
    puts("");
    for(long p = 1; p < d; p++){printf("90");}; puts("91");

    return 0;
}
