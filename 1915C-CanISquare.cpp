#include <cstdio>
#include <cmath>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        ll cs(0); for(ll p = 0; p < n; p++){ll x; scanf("%lld", &x); cs += x;}
        ll chk = std::sqrt(cs);
        if(chk * chk < cs){++chk;}
        else if(chk * chk > cs){--chk;}
        puts(chk * chk == cs ? "YES" : "NO");
    }

}
