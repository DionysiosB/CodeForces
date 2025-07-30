#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
typedef long long ll;

int main(){
    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        ll sx, sy, tx, ty; scanf("%lld %lld %lld %lld", &sx, &sy, &tx, &ty);
        std::vector<double> a(n + 1);
        for(ll p = 0; p < n; p++){scanf("%lf", &a[p]);}
        a[n] = sqrt((sx - tx) * (sx - tx) + (sy - ty) * (sy - ty));
        sort(a.begin(), a.end());
        double s(a.back());
        for(ll p = 0; p < n; p++){s -= a[p];}
        puts(s > 0 ? "No" : "Yes");
    }
}
