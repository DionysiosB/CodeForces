#include <cstdio>
#include <vector>
#include <algorithm>

int main(){


    long n(0), k(0); scanf("%ld %ld\n", &n, &k);
    std::vector<long> speed(n,0);
    for(int p = 0; p < n; p++){scanf("%ld", &speed[p]);}
    std::sort(speed.begin(), speed.end());
    printf("%ld\n", speed[n - k]);

    return 0;
}
