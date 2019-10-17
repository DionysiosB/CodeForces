#include <cstdio>
typedef long long ll;
 
int main(){
 
    ll t; scanf("%lld", &t);
    while(t--){
        ll n, m, k; scanf("%lld %lld %lld", &n, &m, &k);
        ll prev; scanf("%lld", &prev);
        bool possible(true);
        for(ll p = 1; p < n; p++){
            ll x; scanf("%lld", &x);
            if(prev + m + k < x){possible = false;}
            else{m -= ( ((x > k) ? (x - k) : 0) - prev);}
            prev = x;
        }
 
        puts(possible ? "YES" : "NO");
    }
 
    return 0;
}
