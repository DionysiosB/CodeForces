#include <cstdio>
#include <vector>
typedef long long ll;

int main(){
    
    //Simply solve the linear system of equations M*a = f where Mij = |i - j|;
    //Inverted matrix is in Toeplitz form
    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        std::vector<ll> f(n); for(ll &x : f){scanf("%lld", &x);}
		ll sum((f[0] + f[n-1]) / (n - 1)), prev(0);
		for(ll p = 1; p < n; ++p){
		    ll x = (f[p] + sum - f[p - 1])/2;
			printf("%lld ", x - prev);
			prev = x;
		}
		printf("%lld\n", (f[n - 2] + sum - f[n - 1]) / 2);
    }
}
