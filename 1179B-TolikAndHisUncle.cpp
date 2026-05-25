#include <cstdio>
 
int main() {

    long n, m; scanf("%ld %ld", &n, &m);
    for(long col = 0, row = n * m - 1, d = 1; row >= 0; col += d * row, row--, d *= -1){
        printf("%ld %ld\n", col / m + 1, col % m + 1);
    }

    return 0;
}
