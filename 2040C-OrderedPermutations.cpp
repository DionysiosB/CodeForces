#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main() {

    ll t; scanf("%lld", &t);
    while(t--) {
        ll n, k; scanf("%lld %lld", &n, &k);
        if((n <= 62) && (1LL << (n - 1)) < k){puts("-1"); continue;}

        --k;
        std::vector<int> a, b, d;
        while(k){d.push_back(k % 2); k /= 2;}
        while(d.size() < n - 1){d.push_back(0);}
        for (ll p = n - 2, j = 1; p >= 0; p--, j++) {
            if(!d[p]){a.push_back(j);}
            else{b.push_back(j);}
        }

        std::reverse(b.begin(), b.end());
        for(ll x : a){printf("%lld ", x);}
        printf("%lld ", n);
        for(ll x : b){printf("%lld ", x);}
        puts("");
    }

}
