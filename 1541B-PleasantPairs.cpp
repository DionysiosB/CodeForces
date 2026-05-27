#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        std::vector<std::pair<ll, ll> > a(n);
        for(ll p = 0; p < n; p++){scanf("%lld", &a[p].first); a[p].second = p + 1;}
        sort(a.begin(), a.end());

        ll cnt(0);
        for(ll p = 0; p < n; p++){
            for(ll q = p + 1; q < n; q++){
                if(a[p].first * a[q].first > 2 * n){break;}
                cnt += (a[p].first * a[q].first == a[p].second + a[q].second);
            }
        }

        printf("%lld\n", cnt);
    }

}
