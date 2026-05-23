#include <cstdio>
#include <vector>
typedef long long ll;

bool check(const std::vector<ll> &a, ll k, double x){
    ll cnt(0);
    for(ll p = 0; p < a.size(); p++){cnt += a[p] / x;}
    return (cnt >= k);
}

int main(){

    const double eps = 1e-8;
    ll n, k; scanf("%lld %lld", &n, &k); 
    std::vector<ll> a(n); for(ll p = 0; p < n; p++){scanf("%lld", &a[p]);}
    double left(1e-6), right(1e15), res(0);
    while(right > left + eps){
        double mid = (left + right) / 2;
        if(check(a, k, mid)){res = mid; left = mid;}
        else{right = mid;}
    }

    printf("%lf\n", res);

    return 0;
}
