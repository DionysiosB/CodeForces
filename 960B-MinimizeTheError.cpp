#include <cstdio>
#include <vector>
#include <set>
typedef long long ll;

int main(){

    ll n, k1, k2; scanf("%lld %lld %lld", &n, &k1, &k2);
    std::vector<ll> a(n); for(ll p = 0; p < n; p++){scanf("%lld", &a[p]);}
    std::vector<ll> b(n); for(ll p = 0; p < n; p++){scanf("%lld", &b[p]);}
    std::multiset<ll> s;
    for(ll p = 0; p < n; p++){
        ll diff = a[p] - b[p];
        if(diff < 0){diff = -diff;}
        s.insert(diff);
    }

    ll k = k1 + k2;
    while(k--){
        ll x = *s.rbegin();
        s.erase(s.find(x));
        if(x == 0){s.insert(1);}
        else{s.insert(x - 1);}
    }

    ll error(0);
    for(std::multiset<ll>::iterator it = s.begin(); it != s.end(); it++){error += (*it) * (*it);}
    printf("%lld\n", error);

    return 0;
}
