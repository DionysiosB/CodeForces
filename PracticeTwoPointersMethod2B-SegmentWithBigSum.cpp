#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll n, s; scanf("%lld %lld", &n, &s);
    std::vector<ll> a(n, 0); for(ll p = 0; p < n; p++){scanf("%lld", &a[p]);}
    ll left(0), cur(0), mx(-1);
    for(ll p = 0; p < n; p++){
        cur += a[p];
        while(cur >= s + a[left]){cur -= a[left]; ++left;}
        if(cur < s){continue;}
        ll len = p - left + 1;
        if(mx < 0 || mx > len){mx = len;}
    }

    printf("%lld\n", mx);
}
