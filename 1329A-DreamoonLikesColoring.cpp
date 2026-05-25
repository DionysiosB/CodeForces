#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll n, m; scanf("%lld %lld", &n, &m);
    std::vector<ll> v(m); for(ll p = 0; p < m; p++){scanf("%lld", &v[p]);}

    bool possible(true);
    for(ll p = 0; possible && p < m; p++){
        if(v[p] + p > n){possible = false;}
    }

    std::vector<ll> cs(m);
    for(ll p = m - 1; possible && p >= 0; p--){cs[p] = (p + 1 < m ? cs[p + 1] : 0) + v[p];}
    if(cs[0] < n){possible = false;}

    if(possible){
        for(ll p = 0; p < m; p++){
            ll tmp = n - cs[p];
            printf("%lld ", 1 + (p > tmp ? p : tmp));
        }
        puts("");
    }
    else{puts("-1");}

    return 0;
}
