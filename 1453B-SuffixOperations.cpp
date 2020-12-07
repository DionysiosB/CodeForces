#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        std::vector<ll> a(n); for(ll p = 0; p < n; p++){scanf("%lld", &a[p]);}
        ll diffA = (a[0] < a[1]) ? (a[1] - a[0]) : (a[0] - a[1]);
        ll diffB = (a[n - 2] < a[n - 1]) ? (a[n - 1] - a[n - 2]) : (a[n - 2] - a[n - 1]);
        ll mx = diffA > diffB ? diffA : diffB;
        ll pos = (diffA > diffB) ? 0 : (n - 1);

        for(ll p = 1; p + 1 < n; p++){
            if(a[p - 1] <= a[p] && a[p] <= a[p + 1]){continue;}
            if(a[p - 1] >= a[p] && a[p] >= a[p + 1]){continue;}
            ll u = a[p - 1] - a[p]; if(u < 0){u = -u;}
            ll v = a[p + 1] - a[p]; if(v < 0){v = -v;}
            ll prev = u + v;
            ll w = a[p + 1] - a[p - 1]; if(w < 0){w = -w;}
            ll tst = prev - w;
            if(tst > mx){pos = p; mx = tst;}
        }


        if(pos == 0){a[0] = a[1];}
        else if(pos == n - 1){a[n - 1] = a[n - 2];}
        else{a[pos] = a[pos - 1];}


        ll cnt(0);
        for(long p = 1; p < n; p++){
            ll cur = a[p] - a[p - 1];
            if(cur < 0){cur = -cur;}
            cnt += cur;
        }

        printf("%lld\n", cnt);
    }

}
