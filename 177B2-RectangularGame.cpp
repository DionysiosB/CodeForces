#include <cstdio>
typedef long long ll;

int main(){

    ll n(0); scanf("%lld", &n);
    ll currentDiv(2), total(1);

    while(n > 1){
        if(currentDiv * currentDiv > n){total += n; break;}
        else if(n % currentDiv == 0){total += n; n /= currentDiv;}
        else{++currentDiv;}
    }

    printf("%lld\n", total);

    return 0;
}
