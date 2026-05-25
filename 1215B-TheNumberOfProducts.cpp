#include <cstdio>
#include <vector>
typedef long long ll;
//Look at the OLD version for more clarity on the algorithm

int main(){

    ll n; scanf("%lld", &n);
    ll fpos(0), fneg(0), spos(0), sneg(0);
    for(ll p = 0; p < n; p++){
        ll x; scanf("%lld", &x);
        if(x > 0){++fpos;}
        else if(x < 0){ll tmp = fpos; fpos = fneg; fneg = 1 + tmp;}
        sneg += fneg; spos += fpos; 
    }

    printf("%lld %lld\n", sneg, spos);

    return 0;
}
