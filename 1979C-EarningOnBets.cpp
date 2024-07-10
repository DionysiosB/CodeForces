#include <cstdio>
#include <vector>
typedef long long ll;

ll gcd(ll a, ll b){return b ? gcd(b, a % b) : a;}
ll lcm(ll a, ll b){return a * b / gcd(a, b);}

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        std::vector<ll> v(n);
        ll s(1);
        for(ll p = 0; p < n; p++){
            scanf("%lld", &v[p]);
            s = lcm(s, v[p]);
        }

        ll total(0);
        for(long p = 0; p < n; p++){v[p] = s / v[p]; total += v[p];}
        if(total >= s){puts("-1"); continue;}
        for(long p = 0; p < n; p++){printf("%lld ", v[p]);}
        puts("");
    }

}
