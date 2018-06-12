#include <cstdio>
#include <vector>

long findPair(long x){
    long k(1), y(x);
    while(y){y /= 2; k *= 2;}
    return k - x - 1;
}

int main(){
    
    long long n; scanf("%lld\n", &n);
    std::vector<long> p(n + 1, 0);
    for(long u = n; u >= 0; u--){
        if(p[u] != 0){continue;}
        long r = findPair(u);
        p[r] = u; p[u] = r;
    }

    printf("%lld\n", n * (n + 1));
    for(long u = 0; u <= n; u++){printf("%ld ", p[u]);}
    puts("");

    return 0;
}
