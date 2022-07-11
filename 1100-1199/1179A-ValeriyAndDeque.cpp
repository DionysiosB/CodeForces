#include <cstdio>
#include <vector>
typedef long long ll;

int main() {
	ll n, q; scanf("%lld %lld", &n, &q);
    std::vector<ll> a(2 * n + 1); for(ll p = 1; p <= n; p++){scanf("%lld", &a[p]);}

    std::vector<ll> ca(2 * n + 7), cb(2 * n + 7);
	for(ll p = 1; p <= n; p++) {
		ca[p] = a[p]; cb[p] = a[p + 1];
		if(a[p] > a[p + 1]){ll tmp = a[p]; a[p] = a[p + 1]; a[p + 1] = tmp;}
		a[n + p] = a[p]; 
	}

    while(q--){
		ll x; scanf("%lld", &x);
		if(x <= n){printf("%lld %lld\n", ca[x], cb[x]);}
		else{printf("%lld %lld\n", a[n+1], a[n + 2 + (x - 2) % (n - 1)]);}
	}

    return 0;
}
