#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    ll n, a, b; scanf("%lld %lld %lld", &n, &a, &b);
    ll t; scanf("%lld", &t);
    ll sum(0); std::vector<ll> s(n - 1, 0); 
    for(ll p = 0; p < n - 1; p++){scanf("%lld", &s[p]); sum += s[p];}
    sort(s.rbegin(), s.rend());

    double target = 1.0 * t * a / b;
    ll h(0); while(t * a < (t + sum) * b){sum -= s[h++];}
    printf("%lld\n", h);

    return 0;
}
