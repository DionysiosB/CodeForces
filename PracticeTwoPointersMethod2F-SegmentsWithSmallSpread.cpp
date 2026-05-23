#include <cstdio>
#include <vector>
#include <set>
typedef long long ll;

int main(){

    ll n, k; scanf("%lld %lld", &n, &k);
    std::vector<ll> a(n); for(ll p = 0; p < n; p++){scanf("%lld", &a[p]);}
    std::multiset<ll> s;
    ll left(0), cnt(0);
    for(ll p = 0; p < n; p++){
        s.insert(a[p]);
        while((*(s.rbegin())) - (*(s.begin())) > k){s.erase(s.find(a[left])); ++left;}
        cnt += p - left + 1;
    }

    printf("%lld\n", cnt);
}
