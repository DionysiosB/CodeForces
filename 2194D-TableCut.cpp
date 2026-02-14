#include <cstdio>
#include <vector>
typedef long long ll;

int main() {
	
	ll t; scanf("%lld", &t);
	while(t--) {
		ll n, m; scanf("%lld %lld", &n, &m);
		std::vector<std::vector<int> > g(n,std::vector<int>(m));
		ll ones(0);
		for(ll row = 0; row < n; row++){
		    for(ll col = 0; col < m; col++){
		        scanf("%d", &g[row][col]); ones += g[row][col];}
		}
		
		
		printf("%lld\n", (ones / 2) * (ones - ones / 2));
		
		std::vector<ll> half(m); ll h(0);

		for(ll col = m - 1; col >= 0; col--){
			for(ll row = 0; row < n && h < (ones / 2); row++) {
				h += g[row][col];
				++half[col];
			}
		}
		
		ll row(0);
		for(ll x : half) {
			while(row < x) {printf("D"); ++row;}
			printf("R");
		}
		while(row < n){printf("D"); ++row;}
		puts("");
	}
}
