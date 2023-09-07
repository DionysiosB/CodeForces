#include <cstdio>
#include <vector>
#include <map>

int main(){

    const long long MOD = 998244353;

    long n; scanf("%ld", &n);
    std::vector<long> a(n);
    for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    std::map<long, long> mx;
    for(long p = 0; p < n; p++){long k; scanf("%ld", &k); mx[a[p]] = k;}

    long m; scanf("%ld", &m);
    std::vector<long> b(m); bool possible(true);
    for(long p = 0; p < m; p++){
        scanf("%ld", &b[p]);
    }
    std::map<long, long> my;
    for(long p = 0; p < m; p++){
        long k; scanf("%ld", &k);
        my[b[p]] = k;
        if(!mx.count(b[p]) || my[b[p]] > mx[b[p]]){possible = false;}
    }

    long long res(possible ? 1 : 0);
    for(std::map<long, long>::iterator it = mx.begin(); possible && it != mx.end(); it++){
        long key = it->first;
        long val = it->second;
        if(!my.count(key) || my[key] < val){res *= 2; res %= MOD;}
    }

    printf("%lld\n", res);
}
