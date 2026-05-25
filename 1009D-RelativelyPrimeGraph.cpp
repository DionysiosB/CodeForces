#include <cstdio>
#include <vector>
typedef long long ll;

ll gcd (ll a, ll b){return (b == 0) ? a : gcd (b, a % b);}

int main(){

    ll n, m; scanf("%lld %lld", &n, &m);
    if(m < n - 1 || m > n * (n - 1) / 2){puts("Impossible"); return 0;}

    std::vector<std::pair<ll, ll>> v;
    for(ll p = 2; p <= n; p++){v.push_back(std::make_pair(1, p));}

    for(ll a = 2; a <= n && v.size() < m; a++){
        for(ll b = a + 1; b <= n && v.size() < m; b++){
            if(gcd(a, b) != 1){continue;}
            v.push_back(std::make_pair(a, b));
        }
    }

    if(v.size() < m){puts("Impossible");}
    else{
        puts("Possible");
        for(ll p = 0; p < v.size(); p++){printf("%lld %lld\n", v[p].first, v[p].second);}
    }

    return 0;
}
