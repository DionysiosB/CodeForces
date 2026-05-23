#include <cstdio>

int main(){

    long n, m; scanf("%ld %ld", &n, &m);
    long ratio = n / m;
    long rem = n % m;
    for(long p = 0; p < m; p++){printf("%ld ", ratio + (p < rem));}
    puts("");

    return 0;
}
