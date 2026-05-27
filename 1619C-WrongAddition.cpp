#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll a, s; scanf("%lld %lld", &a, &s);
        std::vector<ll> v;
        bool possible(true);
        while(possible && a > 0){
            ll x = (a % 10); a /= 10;
            ll y = (s % 10); s /= 10;
            if(x <= y){v.push_back(y - x);}
            else if(s > 0){
                y += 10 * (s % 10); s /= 10;
                if(y < x || y > 9 + x){possible = false;}
                else{v.push_back(y - x);}
            }
            else{possible = false;}
        }

        if(possible){
            v.push_back(s);
            ll b(0); for(ll p = v.size() - 1; p >= 0; p--){b = 10 * b + v[p];}
            printf("%lld\n", b);
        }
        else{puts("-1");}
    }

}
