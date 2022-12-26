#include <cstdio>
#include <vector>
#include <deque>
#include <algorithm>
typedef long long ll;

int main(){

    ll n; scanf("%lld", &n);
    std::vector<ll> a(n); for(ll p = 0; p < n; p++){scanf("%lld", &a[p]);}
    std::vector<bool> used(n, 0);
    std::deque<ll> d;

    d.push_back(a.back()); used.back() = 1;
    for(ll u = 1; u < n; u++){
        for(ll p = 0; p < n; p++){
            if(used[p]){continue;}
            else if(a[p] == 2 * d.back()){d.push_back(a[p]); used[p] = 1; break;}
            else if(2 * a[p] == d.front()){d.push_front(a[p]); used[p] = 1; break;}
            else if(3 * a[p] == d.back()){d.push_back(a[p]); used[p] = 1; break;}
            else if(a[p] == 3 * d.front()){d.push_front(a[p]); used[p] = 1; break;}
        }
    }

    for(ll p = 0; p < n; p++){printf("%lld ", d[p]);}

    return 0;
}
