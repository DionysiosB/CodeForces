#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    const ll MOD = 1000000007;
    long n, m; scanf("%ld %ld", &n, &m);
    std::vector<std::vector<long> > a(m);

    for(long p = 0; p < n; p++){
        long g; scanf("%ld", &g);
        while(g--){long x; scanf("%ld",&x); a[x - 1].push_back(p);}
    }

    sort(a.begin(),a.end());
    long t(1); ll cnt(1);
    for(long p = 1; p < m; p++){
        if(a[p] == a[p-1]){++t; cnt *= t; cnt %= MOD;} 
        else{t = 1;}
    }
    printf("%lld\n", cnt);

    return 0;
}
