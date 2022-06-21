#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m; scanf("%ld %ld", &n, &m);
        long s(0);
        for(long p = 0; p < n; p++){
            long a; scanf("%ld", &a);
            s += a;
        }

        long res = (s > m) ? (s - m) : 0;
        printf("%ld\n", res);
    }

}
