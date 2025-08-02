#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n, c; scanf("%lld %lld", &n, &c);
        std::vector<ll> w(n);
        for(ll p = 0; p < n; p++){scanf("%lld", &w[p]);}
        sort(w.rbegin(), w.rend());
        ll mult(1), cnt(0);
        for(ll p = 0; p < n; p++){
            if(mult * w[p] > c){++cnt;}
            else{mult *= 2;}
        }

        printf("%lld\n", cnt);
    }

}
