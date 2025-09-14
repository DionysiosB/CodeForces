#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m, x, y; scanf("%ld %ld %ld %ld", &n, &m, &x, &y);
        long tmp;
        for(long p = 0; p < n; p++){scanf("%ld", &tmp);}
        for(long p = 0; p < m; p++){scanf("%ld", &tmp);}
        printf("%ld\n", n + m);
    }

}
