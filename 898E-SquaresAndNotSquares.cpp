#include <cstdio>
#include <vector>
#include <algorithm>
#include <set>
#include <cmath>
typedef long long ll;

int main(){

    const ll N = 2e9;
    std::set<ll> s; for(ll p = 0; p * p <= N; p++){s.insert(p * p);}

    ll n; scanf("%lld", &n);
    std::vector<ll> a(n); for(ll p = 0; p < n; p++){scanf("%lld", &a[p]);}
    ll nsq(0), nz(0);
    std::vector<bool> vsq(n); for(ll p = 0; p < n; p++){vsq[p] = s.count(a[p]); nsq += vsq[p]; nz += (a[p] == 0);}

    ll cnt(0);
    if(nsq > n / 2){
        ll nonsq = n - nsq;
        ll diff = nsq - n/2;
        ll nonzero = nsq - nz;
        cnt = diff + (diff - nonzero) * (diff > nonzero);
    }
    else if(nsq < n / 2){
        std::vector<ll> moves;
        ll diff = n / 2 - nsq;
        for(ll p = 0; p < n; p++){
            if(vsq[p]){continue;}
            ll sr = sqrt(a[p]);
            ll diff1 = a[p] - sr * sr;
            ll diff2 = (sr + 1) * (sr + 1) - a[p];
            moves.push_back(diff1 < diff2 ? diff1 : diff2);
        }

        sort(moves.begin(), moves.end());
        for(ll p = 0; p < diff; p++){cnt += moves[p];}
    }

    printf("%lld\n", cnt);

    return 0;
}
