#include <cstdio>
#include <vector>
#include <map>
typedef long long ll;

int main(){

    ll n, k; scanf("%lld %lld", &n, &k);
    std::vector<ll> a(n); for(ll p = 0; p < n; p++){scanf("%lld", &a[p]);}
    std::map<ll, ll> m;
    ll left(0), cnt(0);
    for(ll p = 0; p < n; p++){
        ++m[a[p]];
        while(m.size() > k){
            --m[a[left]];
            if(m[a[left]] <= 0){m.erase(a[left]);}
            ++left;
        }

        cnt += p - left + 1;
    }

    printf("%lld\n", cnt);
}
