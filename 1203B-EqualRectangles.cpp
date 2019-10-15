#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    ll q; scanf("%lld", &q);
    while(q--){
        ll n; scanf("%lld", &n);
        std::vector<ll> a(4 * n); for(ll p = 0; p < 4 * n; p++){scanf("%lld", &a[p]);}
        sort(a.begin(), a.end());
        ll left(0), right(4 * n - 1);
        ll area(-1);
        bool possible(true);
        while(possible && (left < right)){
            if(a[left] != a[left + 1]){possible = false;}
            if(a[right] != a[right - 1]){possible = false;}
            ll tst = a[left] * a[right];
            area = (area > 0) ? area : tst;
            if(tst != area){possible = false;}
            left += 2; right -= 2;
        }

        puts(possible ? "YES" : "NO");
    }

    return 0;
}
