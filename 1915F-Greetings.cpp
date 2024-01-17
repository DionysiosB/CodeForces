#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

std::pair<std::vector<ll>, ll>  mergesort(std::vector<ll> w){

    const ll n = w.size();
    if(n <= 1){return std::make_pair(w, 0);}


    ll xsz = n / 2; ll ysz = n - n / 2;
    std::vector<ll> x(xsz); for(ll p = 0; p < xsz; p++){x[p] = w[p];}
    std::vector<ll> y(ysz); for(ll p = 0; p < ysz; p++){y[p] = w[xsz + p];}

    std::pair<std::vector<ll>, ll> rmx, rmy;
    rmx = mergesort(x); x = rmx.first;
    rmy = mergesort(y); y = rmy.first;

    ll a(0), b(0), cnt(0); std::vector<ll> out(n);
    for(ll p = 0; p < n; p++){
        if(a < xsz && b < ysz){
            if(y[b] < x[a]){out[p] = y[b++]; cnt += (xsz - a);}
            else if(x[a] < y[b]){out[p] = x[a++];}
        }
        else if(a == xsz){out[p] = y[b++]; cnt += (xsz - a);}
        else if(b == ysz){out[p] = x[a++];}
    }

    return std::make_pair(out, rmx.second + rmy.second + cnt);
}




int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        std::vector<std::pair<ll, ll> > v(n);
        for(ll p = 0; p < n; p++){scanf("%lld %lld", &v[p].first, &v[p].second);}
        sort(v.begin(), v.end());
        std::vector<ll> w(n); for(ll p = 0; p < n; p++){w[p] = v[p].second;} 
        printf("%lld\n", mergesort(w).second);
    }

}
