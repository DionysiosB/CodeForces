#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n + 1);
    long x, y, z;
    printf("? 1 2\n"); fflush(stdout); scanf("%ld", &x);
    printf("? 1 3\n"); fflush(stdout); scanf("%ld", &y);
    printf("? 2 3\n"); fflush(stdout); scanf("%ld", &z);
    a[1] = (x + y - z) / 2;
    a[2] = (x - y + z) / 2;
    a[3] = (-x + y + z) / 2;

    for(long p = 4; p <= n; p++){
        printf("? 1 %ld\n", p); fflush(stdout); 
        long u; scanf("%ld", &u);
        a[p] = u - a[1];
    }

    printf("! ");
    for(long p = 1; p <= n; p++){printf("%ld ", a[p]);}
    puts("");

    return 0;
}
