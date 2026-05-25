#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll n, s; scanf("%lld %lld", &n, &s);
    ll total(0), mn(1e14);
    std::vector<ll> v(n); for(ll p = 0; p < n; p++){
        scanf("%lld", &v[p]); 
        mn = (mn < v[p]) ? mn : v[p];
        total += v[p];
    }

    if(s > total){puts("-1");}
    else if(s <= total - n * mn){printf("%lld\n", mn);}
    else{printf("%lld\n", (total - s) / n);}

    return 0;
}
