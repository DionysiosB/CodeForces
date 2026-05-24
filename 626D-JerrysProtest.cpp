#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    const long N = 5017;
    ll n; scanf("%lld", &n);
    std::vector<ll> a(n); for(ll p = 0; p < n; p++){scanf("%lld", &a[p]);}
    sort(a.begin(), a.end());
    std::vector<ll> diff(N, 0);

    for(ll p = 0; p < n; p++){for(ll q = p + 1; q < n; q++){++diff[a[q] - a[p]];}}
    std::vector<ll> ds(2 * N, 0);
    for(ll p = N - 1; p >= 0; p--){ds[p] = ds[p + 1] + diff[p];}
   
    ll cnt(0); 
    for(ll p = 0; p < N; p++){
        if(diff[p] <= 0){continue;}
        for(ll q = 0; p + q < N; q++){
            if(diff[q] <= 0){continue;}
            cnt += diff[p] * diff[q] * ds[p + q + 1];
        }
    }

    ll m = (n * (n - 1) / 2);  //n choose 2;
    double prob = 1.0 * cnt / (m * m * m);
    printf("%.8lf\n", prob);

    return 0;
}
