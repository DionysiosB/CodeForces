#include <cstdio>
#include <vector>

int main() {

    long t; scanf("%ld", &t);
    while (t--){
        long n, x; scanf("%ld %ld", &n, &x);
        if(n % x){puts("-1"); continue;}

        std::vector<long> v(n + 1);
        for(long p = 1; p <= n; p++){v[p] = p;}
        v[1] = x; v[n] = 1;

        while(x < n){
            for(long p = 2 * x; p <= n; p += x){
                if(n % p == 0){v[x] = p; x = p; break;}
            }
        }

        for (long p = 1; p <= n; p++){printf("%ld ", v[p]);}
        puts("");
    }

}
