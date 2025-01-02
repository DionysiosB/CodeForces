#include <cstdio>
typedef long long ll;
 
int main() {
    
    long t; scanf("%ld", &t);
	while (t--) {
	    ll n, k; scanf("%lld %lld", &n, &k);
		ll mul(n + 1), sum(0), cur(1);
		while (n >= k) {sum += (n % 2) * cur; n /= 2; cur *= 2;}
		printf("%lld\n", mul * sum / 2);
	}
	
}
