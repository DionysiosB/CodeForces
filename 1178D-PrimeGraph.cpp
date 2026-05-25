#include <cstdio>
#include <vector>


bool isPrime(long x){
    for(long p = 2; p * p <= x; p++){if(x % p == 0){return false;}}
    return true;
}

int main(){

    long n; scanf("%ld", &n);
    std::vector<std::pair<long, long> > g;
    g.push_back(std::make_pair(1, n));
    for(long p = 1; p < n; p++){g.push_back(std::make_pair(p, p + 1));}
    for(long p = 1; 2 * p <= n; p++){
        if(isPrime(g.size())){break;}
        g.push_back(std::make_pair(p, p + n / 2));
    }

    printf("%ld\n", g.size());
    for(long p = 0; p < g.size(); p++){printf("%ld %ld\n", g[p].first, g[p].second);}

    return 0;
}
