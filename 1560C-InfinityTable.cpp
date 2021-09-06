#include <cstdio>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll k; scanf("%lld", &k);
        ll idx(0); while(idx * idx < k){++idx;}
        ll row(idx), col(idx);
        ll rem = k - (idx - 1) * (idx - 1);
        if(rem <= idx){row = rem;}
        else{col = 2 * idx - rem;}
        printf("%lld %lld\n", row, col);
    }

}
