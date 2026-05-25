#include <cstdio>
typedef long long ll;

int main(){

    ll r; scanf("%lld", &r);
    ll x(0), y(0);
    for(ll w = 1; w <= 1e6; w++){
        if(w * w + 3 * w + 1 > r){break;}
        ll z = (r - w * w - w - 1) / (2 * w);
        if(w * w + 2 * w * z + w + 1 == r){x = w; y = z; break;}
    }

    if(x && y){printf("%lld %lld\n", x, y);}
    else{puts("NO");}

    return 0;
}
