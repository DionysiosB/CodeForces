#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        std::vector<ll> a(n); for(ll p = 0; p < n; p++){scanf("%lld", &a[p]);}
        sort(a.rbegin(), a.rend());
        ll score(0);
        for(ll p = 0; p < n; p++){
            if(p % 2 == 0 && a[p] % 2 == 0){score += a[p];}
            if(p % 2 == 1 && a[p] % 2 == 1){score -= a[p];}
        }

        if(score > 0){puts("Alice");}
        else if(score < 0){puts("Bob");}
        else{puts("Tie");}
    }

}
