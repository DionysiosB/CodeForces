#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll n; scanf("%lld", &n);
    std::vector<ll> a(n + 1, 0), b(n + 1, 0);
    for(ll p = 1; p <= 2 * n; p++){
        ll x; scanf("%lld", &x);
        if(!a[x]){a[x] = p;}
        else{b[x] = p;}
    }

    ll total(0), pos(1);
    for(ll p = 1; p <= n; p++){
        ll dist = pos - a[p]; if(dist < 0){dist = -dist;}
        total += dist; 
        pos = a[p];
    }
    pos = 1;
    for(ll p = 1; p <= n; p++){
        ll dist = pos - b[p]; if(dist < 0){dist = -dist;}
        total += dist; 
        pos = b[p];
    }

    printf("%lld\n", total);

    return 0;
}
