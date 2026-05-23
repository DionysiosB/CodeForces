#include <cstdio>
#include <vector>

int main(){

    long n, l, r, ql, qr; scanf("%ld %ld %ld %ld %ld\n", &n, &l, &r, &ql, &qr);
    std::vector<int> weights(n + 1, 0);
    std::vector<int> leftSums(n + 1, 0);
    std::vector<int> rightSums(n + 1, 0);
    for(long p = 1; p <= n; p++){scanf("%d\n", &weights[p]);}
    for(long p = 1; p <= n; p++){leftSums[p]  = leftSums[p - 1]  + weights[p];}
    for(long p = 1; p <= n; p++){rightSums[p] = rightSums[p - 1] + weights[n - p + 1];}

    long long total = 1e18;
    for(long p = 0; p <= n; p++){
        long long test = l * leftSums[p] + r * rightSums[n - p];
        if(2 * p < n){test += qr * (n - 2 * p - 1);}
        else if(2 * p > n){test += ql * (2 * p - n - 1);}
        if(test < total){total = test;}
    }

    printf("%lld\n", total);

    return 0;
}
