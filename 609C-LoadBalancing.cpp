#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long n; scanf("%ld\n", &n);
    std::vector<long> source(n, 0);

    long long sum(0);
    for(long p = 0; p < n; p++){
        scanf("%ld", &source[p]);
        sum += source[p];
    }
    long long avg = sum / n;
    long long rem = sum - n * avg;

    sort(source.begin(), source.end());
    std::vector<long> target(n, avg);
    for(long p = n - 1; p > n - 1 - rem; p--){++target[p];}

    long long total(0);
    for(long p = 0; p < n; p++){
        long long diff = target[p] - source[p];
        if(diff < 0){diff = -diff;}
        total += diff;
    }

    total /= 2;
    printf("%lld\n", total);

    return 0;
}
