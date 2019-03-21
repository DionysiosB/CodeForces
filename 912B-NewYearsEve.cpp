#include <cstdio>
typedef long long ll;

int main(){

    ll n, k; scanf("%lld %lld", &n, &k);
    if(k == 1){printf("%lld\n", n);}
    else{
        int bt(0);
        ll u(n); while(u > 0){++bt; u /= 2;}
        printf("%lld\n", (1LL << bt) - 1);
    }

    return 0;
}
