#include <cstdio>
#include <set>
typedef long long ll;

int main(){

    ll n, k; scanf("%lld %lld", &n, &k);
    std::set<ll> s;
    bool possible(true);
    for(long p = 1; p <= k; p++){
        if(s.count(n % p)){possible = false; break;}
        s.insert(n % p);
    }

    puts(possible ? "Yes" : "No");

    return 0;
}
