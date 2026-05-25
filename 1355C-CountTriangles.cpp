#include <cstdio>
typedef long long ll;

ll calcProgression(ll a, ll d, ll n) {
	return (2 * a + d * (n - 1)) * n / 2;
}

ll mx(ll a, ll b){return (a > b) ? a : b;}

int main(void) {
	ll a, b, c, d;
	scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

	ll ans = 0;
	for (ll z = c; z <= d; ++z) {
		int minX = mx(a, z - c + 1);
		if (minX > b){continue;}
		int mid = z - b + 1;
		int start = c - mx(b, z - minX + 1) + 1;
		if (mid <= minX) {ans += (c - b + 1) * (b - minX + 1);}
		else if (mid > b){ans += calcProgression(start, 1, b - minX + 1);}
		else {ans += calcProgression(start, 1, mid - minX + 1) + (b - mid) * (c - b + 1);}
	}    

	printf("%lld\n", ans);

	return 0;
}
