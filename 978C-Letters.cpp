#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    ll n, m; scanf("%lld %lld", &n, &m);
    std::vector<ll> a(n + 1), cs(n + 1);
    for(ll p = 1; p <= n; p++){
        scanf("%lld", &a[p]);
        cs[p] = cs[p - 1] + a[p];
    }

    while(m--){
        ll b; scanf("%lld", &b);
        ll left(0), right(n), ind(0);
        while(left <= right){
            ll mid = (left + right) / 2;
            if(cs[mid] >= b){ind = mid; right = mid - 1;}
            else if(cs[mid] < b){left = mid + 1;}
        }

        ll dorm = ind;
        ll room = b - cs[ind - 1];
        printf("%lld %lld\n", dorm, room);
    }

    return 0;
}
