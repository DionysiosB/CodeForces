#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;
 
int main(){
    
    ll t; scanf("%lld", &t);
    while(t--){
        ll n, x; scanf("%lld %lld", &n, &x);
        std::vector<ll> v(n); for(ll p = 0; p < n; p++){scanf("%lld", &v[p]);}
        sort(v.begin(), v.end());
        ll sum(0), left(0), right(n - 1), total(0);
        std::vector<ll> w;
        while(left <= right){
            ll prev = sum / x;
            if((sum + v[right]) / x  > sum / x){total += v[right]; w.push_back(v[right]); sum += v[right--];}
            else{w.push_back(v[left]); sum += v[left++];}
        }
        
        printf("%lld\n", total);
        for(ll p = 0; p < w.size(); p++){printf("%lld ", w[p]);}
        puts("");
    }
 
}
