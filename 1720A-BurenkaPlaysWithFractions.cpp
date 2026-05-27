#include <cstdio>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll a, b, c, d; scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
        ll left(b * c), right(a * d);
        if(left == right){puts("0");}
        else if(left == 0 || right == 0){puts("1");}
        else if(left % right == 0 || right % left == 0){puts("1");}
        else{puts("2");}
    }

}
