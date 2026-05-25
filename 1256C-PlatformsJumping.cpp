#include <cstdio>
#include <vector>

int main (){

    long n, m, d; scanf("%ld %ld %ld", &n, &m, &d);
    std::vector<long> c(m + 1); for(long p = 1; p <= m; p++){scanf("%ld", &c[p]); n -= c[p];}

    long r(d - 1), s(m + 1);
    if(n > s * r){puts("NO");}
    else {
        puts("YES");
        long q, k;
        for (long p = 0; p <= m; p++){
            for(q = 0; q < c[p]; q++){printf("%ld ", p);}
            for(k= (n < r) ? n : r, n -= k, q = 0; q < k; q++){printf("0 ");}
        }
    }

    return 0;
}
