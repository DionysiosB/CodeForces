#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll n, m; scanf("%lld %lld", &n, &m);
    std::vector<ll> h(n); for(ll p = 0; p < n; p++){scanf("%lld", &h[p]);}
    std::vector<ll> left(n, 0); for(ll p = 1; p < n; p++){left[p] = left[p - 1] + ((h[p] < h[p - 1]) ? (h[p - 1] - h[p]) : 0);}
    std::vector<ll> right(n, 0); for(ll p = n - 2; p >= 0; p--){right[p] = right[p + 1] + ((h[p] < h[p + 1]) ? (h[p + 1] - h[p]) : 0);}
    while(m--){
        ll res(0);
        ll s, f; scanf("%lld %lld", &s, &f);
        if(f > s){res = left[f - 1] - left[s - 1];}
        else{res = right[f - 1] - right[s - 1];}
        printf("%lld\n", res);
    }

}
