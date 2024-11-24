#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        std::vector<ll> v(n); for(ll p = 0; p < n; p++){scanf("%lld", &v[p]);}
        sort(v.begin(), v.end());
        std::vector<ll> w;
        for(ll p = 1; p < v.size(); p++){
            if(v[p - 1] == v[p]){w.push_back(v[p]); v[p] = -1e9 - 7;}
        }

        if(w.size() < 4){puts("NO"); continue;}
        sort(w.begin(), w.end());
        std::vector<ll> u(4); u[0] = w[0]; u[1] = w[1]; u[2] = w[w.size() - 2], u[3] = w[w.size() - 1];


        ll a = (u[2] - u[0]) * (u[3] - u[1]);
        ll b = (u[3] - u[0]) * (u[2] - u[1]);
        if(a > b){printf("YES\n%lld %lld %lld %lld %lld %lld %lld %lld\n", u[0], u[1], u[0], u[3], u[2], u[1], u[2], u[3]);}
        else{printf("YES\n%lld %lld %lld %lld %lld %lld %lld %lld\n", u[0], u[1], u[0], u[2], u[3], u[1], u[3], u[2]);}
    }

}
