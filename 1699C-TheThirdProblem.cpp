#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    const ll MOD = 1e9 + 7;

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        std::vector<ll> a(n), pos(n);
        for(ll p = 0; p < n; p++){
            scanf("%lld", &a[p]);
            pos[a[p]] = p;
        }

        ll left(pos[0]), right(pos[0]), cnt(1);
        for(ll p = 1; p < n; p++){
            if(pos[p] < left){left = pos[p];}
            else if(pos[p] > right){right = pos[p];}
            else{cnt = cnt * (right - left + 1 - p) % MOD;}
        }

        printf("%lld\n", cnt);
    }

}
