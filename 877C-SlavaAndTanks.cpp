#include <cstdio>

int main(){
    
    long n; scanf("%ld", &n);
    printf("%ld\n", 3 * n / 2);
    for(long p = 2; p <= n; p += 2){printf("%ld ", p);}
    for(long p = 1; p <= n; p += 2){printf("%ld ", p);}
    for(long p = 2; p <= n; p += 2){printf("%ld ", p);}
    puts("");
    
    return 0;
}
