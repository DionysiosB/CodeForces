#include <cstdio>
#include <vector>
typedef long long ll;

ll gcd(ll a, ll b){return b ? gcd(b, a % b) : a;}
ll lcm(ll a, ll b){return a * b / gcd(a, b);}

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        std::vector<ll> a(n); for(ll p = 0; p < n; p++){scanf("%lld", &a[p]);}

        ll fgcd(0), flcm(1);
        for(ll p = n - 1; p >= 0; p--){
            fgcd = gcd(fgcd, a[p]);
            flcm = lcm(flcm, a[p] / fgcd);
        }

        printf("%lld\n", flcm);
    }
}
