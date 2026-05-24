#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    ll n; scanf("%lld", &n);
    std::vector<ll> a(n); for(ll p = 0; p < n; p++){scanf("%lld", &a[p]);}
    sort(a.begin(), a.end());
    std::vector<ll> diffs;
    for(ll p = 0; p < n; p++){for(ll q = p + 1; q < n; q++){diffs.push_back(a[q] - a[p]);}}
    ll m = diffs.size();
    sort(diffs.begin(), diffs.end());
    ll cnt(0); 
    for(ll p = 0; p < m; p++){
        ll u = p + 1;
        for(ll q = 0; q < m; q++){
            ll s = diffs[p] + diffs[q];
            while(u < m && diffs[u] <= s){++u;}
            cnt += (m - u);
        }
    }
    
    double prob = 1.0 * cnt / (m * m * m);
    printf("%.8lf\n", prob);

    return 0;
}
