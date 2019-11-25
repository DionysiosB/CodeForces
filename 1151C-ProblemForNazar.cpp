#include<cstdio>
#include<algorithm>
typedef long long ll;

const ll MOD =  1000000007;
 
int f(ll x){
	ll a[2]; a[0] = a[1] = 0;
	for(ll p = 1, q = 0; a[0] + a[1] < x; p *= 2, q = 1 - q){
        const ll tmp = x - a[0] - a[1];
        a[q] += (tmp < p) ? tmp : p;
    }
	a[0] %= MOD ; a[1] %= MOD;
	return (a[0] * a[0] + a[1] * a[1] + a[1]) % MOD;
}
 

int main(){
	ll left, right; scanf("%lld %lld", &left, &right);
	printf("%lld\n", (f(right) - f(left - 1) + MOD) % MOD);
}
