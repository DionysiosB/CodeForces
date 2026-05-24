#include <cstdio>

int main(){

    long n, m, k; scanf("%ld %ld %ld\n", &n, &m, &k);
    long left(k - 1), right(n - k);
    long count(1), M(m), prev(0);
    m -= n;

    for(long p = 0; p < M; p++){
        long temp = 1 + ((p < left) ? p : left) + ((p < right) ? p : right);
        if(m >= temp){++count; m -= temp;}
        else{break;}

        if(temp <= prev){break;} else{prev = temp;}
    }

    count += m / n;

    printf("%ld\n", count);

    return 0;
}
