#include <cstdio>
#include <vector>


int main(){

    long n, m, k; scanf("%ld %ld %ld", &n, &m, &k);
    std::vector<long> pow(n + 1), sc(n + 1), best(m + 1, 0);
    for(long p = 1; p <= n; p++){scanf("%ld", &pow[p]);}
    for(long p = 1; p <= n; p++){
        scanf("%ld", &sc[p]);
        best[sc[p]] = (best[sc[p]] > pow[p]) ? best[sc[p]] : pow[p];
    }

    long cnt(0);
    for(long p = 0; p < k; p++){long x; scanf("%ld", &x); cnt += (pow[x] < best[sc[x]]);}
    printf("%ld\n", cnt);

    return 0;
}
