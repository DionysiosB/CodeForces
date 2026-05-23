#include <cstdio>
#include <vector>

int main(){

    long long n, A; scanf("%lld %lld\n", &n, &A);
    std::vector<long long> d(n);
    long long S(0);

    for(int p = 0; p < n; p++){
        scanf("%lld", &d[p]);
        S += d[p];
    }

    for(int p = 0; p < n; p++){
        long long m = A - S + d[p];
        if(m < 1){m = 1;}
        long long M = A - n + 1;
        if(M > d[p]){M = d[p];}
        long long possible = d[p] - (M - m + 1);
        printf("%lld ", possible);
    }

    puts("");

    return 0;
}
