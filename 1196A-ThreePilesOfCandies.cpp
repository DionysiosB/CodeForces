#include <cstdio>
typedef long long ll;
 
int main(){
    ll t; scanf("%lld", &t);
    while(t--){
        ll x, y, z;
        scanf("%lld %lld %lld", &x, &y, &z);
        printf("%lld\n", (x + y + z) / 2);
    }
    
    return 0;
}
