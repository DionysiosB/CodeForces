#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll n, m; scanf("%lld %lld", &n, &m);
    std::vector<ll> a(n); for(ll p = 0; p < n; p++){scanf("%lld", &a[p]);}
    std::vector<ll> b(m); for(ll p = 0; p < m; p++){scanf("%lld", &b[p]);}
    ll idx(0), cur(0), cnt(0);
    for(ll p = 0; p < m; p++){
        if(p > 0 && b[p] == b[p - 1]){cnt += cur; continue;}
        else{cur = 0;}
        while(idx < n && a[idx] <= b[p]){
            if(a[idx] == b[p]){++cur; ++cnt;}
            ++idx;
        }
    }

    printf("%lld\n", cnt);

}
