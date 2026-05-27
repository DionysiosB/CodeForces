#include <cstdio>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n, m, x; scanf("%lld %lld %lld", &n, &m, &x);
        --x; 
        ll row = x % n;
        ll col = x / n;
        ll res = row * m + col + 1;
        printf("%lld\n", res);
    }

}
