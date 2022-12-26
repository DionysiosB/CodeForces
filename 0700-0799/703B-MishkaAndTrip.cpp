#include <cstdio>
#include <vector>

int main(){

    long n, k; scanf("%ld %ld\n", &n, &k);
    std::vector<long> beauty(n, 0);
    std::vector<bool> caps(n, 0);
    long long total(0);
    long long capsTotal(0);

    for(long p = 0; p < n; p++){
        scanf("%ld", &beauty[p]);
        total += beauty[p];
    }

    long long ans(0);
    for(long p = 0; p < k; p++){
        long x; scanf("%ld", &x);
        caps[x - 1] = 1;
        capsTotal += beauty[x - 1];
    }

    for(long p = 0; p < n; p++){
        if(caps[p]){ans -= beauty[p] * beauty[p]; continue;}
        if(!caps[(n + p - 1) % n]){ans += beauty[p] * beauty[(n + p - 1) % n];}
        if(!caps[(n + p + 1) % n]){ans += beauty[p] * beauty[(n + p + 1) % n];}
    }

    ans += capsTotal * (2 * total - capsTotal);
    ans /= 2;

    printf("%lld\n", ans);

    return 0;
}
