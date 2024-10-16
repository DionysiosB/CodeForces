#include <cstdio>
#include <vector>

int main(){

    const long MOD = 1e9 + 7;
    std::vector<long> v(1e5 + 7, 1);
    for(long p = 1; p < v.size(); p++){v[p] = (2 * v[p - 1]) % MOD;}

    long t; scanf("%ld", &t);
    std::vector<long> wn(t), wk(t);
    for(long p = 0; p < t; p++){scanf("%ld", &wn[p]);}
    for(long p = 0; p < t; p++){scanf("%ld", &wk[p]);}
    for(long p = 0; p < t; p++){printf("%ld\n", (wk[p] < wn[p]) ? v[wk[p]] : 1);}
    puts("");
}
