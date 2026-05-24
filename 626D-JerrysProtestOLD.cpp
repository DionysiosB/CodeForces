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
        for(ll q = 0; q < m; q++){
            ll s = diffs[p] + diffs[q];
            cnt += diffs.end() - std::upper_bound(diffs.begin(), diffs.end(), s);
        }
    }
    
    double prob = 1.0 * cnt / (m * m * m);
    printf("%.8lf\n", prob);

    return 0;
}
