#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        std::vector<ll> a(3); for(ll p = 0; p < 3; p++){scanf("%lld", &a[p]);}
        sort(a.begin(), a.end());
        bool ans = (a[2] <= (a[0] + a[1] + a[2] + 1) / 2);
        puts(ans ? "Yes" : "No");
    }

    return 0;
}
