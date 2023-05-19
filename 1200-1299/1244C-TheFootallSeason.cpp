#include <cstdio>
typedef long long ll;

int main(){

    ll n, m, w, d; scanf("%lld %lld %lld %lld", &n, &m, &w, &d);
    ll x(-1);
    for(ll y = 0; y < 100000 && y * d <= m; y++){
        if((m - y * d) % w == 0 && y + (m - y * d) / w <= n){
            x = (m  - y * d) / w;
            printf("%lld %lld %lld\n", x, y, n - x - y);
            break;
        }
    }

    if(x < 0){puts("-1");}

    return 0;
}
