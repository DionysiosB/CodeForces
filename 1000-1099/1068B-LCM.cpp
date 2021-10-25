#include <cstdio>
#include <map>
typedef long long ll;

int main(){

    ll b; scanf("%lld", &b);
    std::map<ll, ll> m;
    ll upper = b;
    for(ll p = 2; p * p <= upper; p++){while(b % p == 0){++m[p]; b /= p;}}
    if(b > 1){++m[b];}
    ll total(1);
    for(std::map<ll, ll>::iterator it = m.begin(); it != m.end(); it++){total *= (1 + it->second);}
    printf("%lld\n", total);

    return 0;
}
