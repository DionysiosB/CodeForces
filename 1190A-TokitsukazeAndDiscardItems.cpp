#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

	ll n,m,k;
	scanf("%lld %lld %lld", &n, &m, &k);
    std::vector<ll> v(m + 1); for(int p = 1; p <= m; p++){scanf("%lld",&v[p]);}
	ll ans(0), sum(0), now(1);
	while(now <= m){
		ll r = ((v[now] - sum - 1) / k + 1) * k + sum;
		while(now<=m&&v[now]<=r){sum++; now++;}
		ans++;
	}
	printf("%lld\n",ans);

	return 0;
}
