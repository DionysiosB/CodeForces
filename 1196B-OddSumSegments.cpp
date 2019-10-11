#include <cstdio>
#include <vector>
typedef long long ll;
 
int main(){
    ll t; scanf("%lld", &t);
    while(t--){
        ll n, k; scanf("%lld %lld", &n, &k);
        std::vector<ll> a(n); 
        ll sum(0);
        for(ll p = 0; p < n; p++){scanf("%ld", &a[p]); sum += a[p];}
        
        
        
        std::vector<ll> res;
        for(ll p = 0; p < n; p++){
            if(res.size() >= k - 1){break;}
            if(a[p] % 2){res.push_back(p + 1);}
        }
        res.push_back(n);
        
        if(((k % 2) ^ (sum % 2)) || res.size() < k){puts("NO"); continue;}
        puts("YES");
        for(ll p = 0; p < res.size(); p++){printf("%lld ", res[p]);}
        puts("");
    }
    
    return 0;
}
