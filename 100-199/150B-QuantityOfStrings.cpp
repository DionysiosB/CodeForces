#include <cstdio>

int main(){

    const long long M = 1000000007;
    long long n, m, k; scanf("%lld %lld %lld", &n, &m, &k);
    long long output(1);
    if(k == 1 || k > n){for(long long p = 0; p < n; p++){output = (output * m) % M;}}
    else if(k == n){for(long long p = 0; p < (n + 1) / 2; p++){output = (output * m) % M;}}
    else if(k % 2 == 1){output = (m * m) % M;}
    else if(k % 2 == 0){output = m;}

    printf("%lld\n", output);

    return 0;
}
