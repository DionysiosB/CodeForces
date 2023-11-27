#include <cstdio>
#include <vector>
typedef long long ll;
 
int main(){
    
    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        std::vector<ll> a(n + 1, 0);
        ll mn(1e17 + 7), mx(0);
        for(ll p = 1; p <= n; p++){
            ll x; scanf("%lld", &x);
            mn = (mn < x ? mn : x);
            mx = (mx > x ? mx : x);
            a[p] = a[p - 1] + x;
        }
 
        ll res = mx - mn;
        for(ll r = 2;  r * r <= n; r++){
            if(n % r){continue;}
            
            ll step = r; mn = 1e17 + 7; mx = 0;
            for(ll p = r; p <= n; p += r){
                ll cur = a[p] - a[p - r];
                mn = (mn < cur ? mn : cur);
                mx = (mx > cur ? mx : cur);
            }
            
            ll tmp = mx - mn; res = (res > tmp ? res : tmp);
 
            step = n / r; mn = 1e17; mx = 0;
            for(ll p = step; p <= n; p += step){
                ll cur = a[p] - a[p - step];
                mn = (mn < cur ? mn : cur);
                mx = (mx > cur ? mx : cur);
            }
            
            tmp = mx - mn; res = (res > tmp ? res : tmp);
        }
        
        printf("%lld\n", res);
    }
}
