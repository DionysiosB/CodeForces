#include <cstdio>
typedef long long ll;

ll gcd(ll a, ll b){return (b == 0) ? a : gcd(b, a % b);}

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        ll n, m; scanf("%lld %lld", &n, &m);
        ll g = gcd(m, n);
        n /= g; m /= g;
        long fn(0); while(n % 3 == 0){++fn; n /= 3;}
        long fm(0); while(m % 2 == 0){++fm; m /= 2;}
        puts((n == 1 && m == 1 && fm <= fn) ? "YES" : "NO");
    }

}
