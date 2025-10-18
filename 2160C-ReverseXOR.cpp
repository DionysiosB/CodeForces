#include <cstdio>
#include <vector>
typedef long long ll;

int main(){
    
    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        while(n && n % 2 == 0){n /= 2;}
        std::vector<bool> v;
        while(n){v.push_back(n % 2); n /= 2;}
        bool ans(v.size() % 2 ? (!v[v.size() / 2]) : true);
        for(long p = 0; ans && p < v.size(); p++){if(v[p] != v[v.size() - 1 - p]){ans = false;}}
        puts(ans ? "YES" : "NO");
    }

}
