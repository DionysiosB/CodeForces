#include <cstdio>
typedef long long ll;

int main(){

    ll q; scanf("%lld", &q);
    while(q--){
        ll n; scanf("%lld", &n); 
        ll cnt(0);
        while(n > 1){
            if(n % 2 == 0){n /= 2; ++cnt;}
            else if(n % 3 == 0){n /= 3; cnt += 2;}
            else if(n % 5 == 0){n /= 5; cnt += 3;}
            else{cnt = -1; break;}
        }
        printf("%lld\n", cnt);
    }

    return 0;
}
