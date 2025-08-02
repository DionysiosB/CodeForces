#include<cstdio>
typedef long long ll;

ll gcd(ll a, ll b){return a ? gcd(b % a, a) : b;}

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll a, b, k; scanf("%lld %lld %lld", &a, &b, &k);
        ll g = gcd(a, b);
        int res = 2 - (a / g + b / g <= 2 * k && a / g <= k && b / g <= k);
        printf("%d\n", res);
    }
}
