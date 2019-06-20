#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll n; scanf("%lld", &n);
    std::vector<ll> a(n); for(ll p = 0; p < n; p++){scanf("%lld", &a[p]);}
    if(n == 1){puts("0"); return 0;}

    ll left(-1), right(n);
    ll ls(0), rs(0), ms(0);
    while(left < right){
        if(ls <= rs){ls += a[++left];}
        else{rs += a[--right];}
        if(left < right && ls == rs){ms = ls;}
    }

    printf("%lld\n", ms);

    return 0;
}
