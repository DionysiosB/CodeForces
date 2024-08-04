#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n, m; scanf("%lld %lld", &n, &m);
        std::vector<ll> v(n); for(ll p = 0; p < n; p++){scanf("%lld", &v[p]);}
        sort(v.begin(), v.end());
        ll left(0), cur(0), mx(0);
        for(ll p = 0; p < n; p++){
            cur += v[p];
            while(v[left] + 1 < v[p]){cur -= v[left++];}
            while(cur > m){cur -= v[left++];}
            mx = (mx > cur ? mx : cur);
            //printf("Left:%lld lv:%lld Right:%lld rv:%lld Cur:%lld    Max:%lld\n", left, v[left], p, v[p], cur, mx);
        }

        printf("%lld\n", mx);
    }

}
