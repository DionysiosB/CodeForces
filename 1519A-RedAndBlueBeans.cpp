#include <cstdio>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll r, b, d; scanf("%lld %lld %lld", &r, &b, &d);
        ll diff = r - b;
        bool res = (d * b >= diff) && (d * r >= -diff);
        puts(res ? "YES" : "NO");
    }

}
