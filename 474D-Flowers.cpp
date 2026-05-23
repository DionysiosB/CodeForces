#include <cstdio>
#include <vector>

int main(){

    const long long M = 1000000007;
    const long long L = 100001;

    long t, k; scanf("%ld %ld\n", &t, &k);

    std::vector<long long> array(L, 0);
    for(long p = 0; p < k; p++){array[p] = 1;}
    for(long p = k; p <= L; p++){array[p] = (array[p - 1] + array[p - k]) % M;}

    std::vector<long long> cumulative(L, 0);
    cumulative[0] = 1; for(long p = 1; p <= L; p++){cumulative[p] = (cumulative[p - 1] + array[p]) % M;}

    while(t--){long a, b; scanf("%ld %ld\n", &a, &b); printf("%lld\n", (2 * M + cumulative[b] - cumulative[a - 1]) % M);}

    return 0;
}
