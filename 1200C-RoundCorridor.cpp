#include <cstdio>
typedef long long ll;


ll gcd (ll a, ll b){return (b == 0) ? a : gcd (b, a % b);}

int main(){

    ll n, m, q; scanf("%lld %lld %lld", &n, &m, &q);
    ll a[3]; a[1] = n / gcd(n,m); a[2] = m / gcd(n,m);

    while(q--){
        ll sx, sy, ex, ey; scanf("%lld %lld %lld %lld", &sx, &sy, &ex, &ey);
        if((sy - 1) / a[sx] == (ey - 1) / a[ex]){puts("YES");}
        else{puts("NO");}
    }

    return 0;
}
