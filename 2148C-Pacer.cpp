#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m; scanf("%ld %ld", &n, &m);
        long wa(0), wb(0), cnt(0);
        for(long p = 0; p < n; p++){
            long a, b; scanf("%ld %ld", &a, &b);
            cnt += (a - wa);
            cnt -= ((a - wa + 2) % 2) != ((b - wb + 2) % 2);
            wa = a; wb = b;
        }

        cnt += (m - wa);
        printf("%ld\n", cnt);
    }
}
