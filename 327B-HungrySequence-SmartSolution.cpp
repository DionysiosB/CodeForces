#include <cstdio>

int main(){
    long n; scanf("%ld\n", &n);
    for(long k = n + 1; k <= 2 * n; k++){printf("%ld ", k);}
    printf("\n");
    return 0;
}
