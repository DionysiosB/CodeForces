#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        ll div(1); std::vector<ll> v;
        for(long p = 0; p < 17; p++){
            div *= 10;
            if(n % (div + 1)){continue;}
            v.push_back(n / (div + 1));
        }

        printf("%ld\n", v.size());
        if(!v.size()){continue;}
        sort(v.begin(), v.end());
        for(ll r : v){printf("%lld ", r);}
        puts("");
    }

}
