#include <cstdio>
typedef long long ll;


ll digits(ll z){
    ll cnt(0);
    while(z > 0){z /= 10; ++cnt;}
    return cnt;
}

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll a, b, c; scanf("%lld %lld %lld", &a, &b, &c);
        
        ll g(1); while(digits(g) < c){g *= 2;}
        ll x(g); while(digits(x) < a){x *= 3;}
        ll y(g); while(digits(y) < b){y *= 5;}
        printf("%lld %lld\n", x, y);
    }

}
