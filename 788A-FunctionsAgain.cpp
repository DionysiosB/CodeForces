#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll n; scanf("%lld", &n);
    long prev; scanf("%ld", &prev);
    std::vector<ll> d(n - 1);
    for(ll p = 0; p + 1 < n; p++){
        ll a; scanf("%lld", &a);
        d[p] = a - prev;
        d[p] = (d[p] > 0 ? d[p] : -d[p]);
        prev = a;
    }

    //f,g are the current sums where the last addition is positive/negative respectively
    //if g is negative, there is no reason to add it to the next sum
    ll fprev(0), gprev(0), mx(0);
    for(ll p = 0; p < n - 1; p++){
        ll f = gprev + d[p];

        ll g = fprev - d[p];
        g = (g > 0 ? g : 0);

        mx = (mx > f ? mx : f);
        mx = (mx > g ? mx : g);

        fprev = f;
        gprev = g;
    }

    printf("%lld\n", mx);

    return 0;
}
