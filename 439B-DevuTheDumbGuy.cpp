#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long long n, x; scanf("%lld %lld\n", &n, &x);
    std::vector<long long> chapters(n, 0);
    for(long long p = 0; p < n; p++){scanf("%lld", &chapters[p]);}
    sort(chapters.begin(), chapters.end());

    long long total(0);
    for(long long p = 0; p < n; p++){
        long long mult = x - p; if(mult < 1){mult = 1;}
        total += mult * chapters[p];
    }

    printf("%lld\n", total);

    return 0;
}
