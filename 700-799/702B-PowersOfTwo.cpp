#include <cstdio>
#include <map>

int main(){

    std::map<long long, long long> count;
    const int MAX_P = 31;
    long long total(0);
    long long n; scanf("%lld\n", &n);
    while(n--){
        long long x; scanf("%lld\n", &x);
        long long t = 1; int P = MAX_P;
        while(P--){t *= 2; total += count[t - x];}
        ++count[x];
    }

    printf("%lld\n", total);

    return 0;
}
