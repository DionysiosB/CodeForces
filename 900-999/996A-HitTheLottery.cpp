#include <cstdio>
#include <vector>

int main(){

    std::vector<long> d; d.push_back(100); d.push_back(20); d.push_back(10); d.push_back(5); d.push_back(1);

    long n; scanf("%ld", &n);
    long cnt(0);
    for(long p = 0; p < d.size(); p++){cnt += (n / d[p]); n %= d[p];}
    printf("%ld\n", cnt);

    return 0;
}
