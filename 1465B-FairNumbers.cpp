#include <cstdio>
#include <vector>
typedef long long ll;

bool check(ll x){

    std::vector<bool> digits(10); 
    ll m(x); while(m > 0){digits[m % 10] = 1; m /= 10;}
    for(ll p = 1; p <= 9; p++){if(digits[p] && (x % p != 0)){return false;}}
    return true;
}



int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        ll res(n);
        while(!check(res)){++res;}
        printf("%lld\n", res);
    }

}
