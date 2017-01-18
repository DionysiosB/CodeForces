#include <cstdio>

int main(){

    long n, k; scanf("%ld %ld\n", &n, &k);
    long count(n + 1);
    for(int p = 0; p < k; p++){
        long m; scanf("%ld", &m);
        count += m - 1;
        for(int q = 0; q < m; q++){
            long temp; scanf("%ld", &temp);
            if(temp == q + 1){count -= 2;}
        }
    }

    printf("%ld\n", count);

    return 0;
}
