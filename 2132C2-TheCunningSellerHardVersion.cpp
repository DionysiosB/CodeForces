#include<cstdio>
#include<vector>
#include<cmath>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n, k; scanf("%lld %lld", &n, &k);
        std::vector<ll> v;
        ll y(n), mnd(0);
        while(y){v.push_back(y % 3); y /= 3; mnd += v.back();}
        if(mnd > k){puts("-1"); continue;}

        ll rem(k - mnd);
        for(ll p = v.size() - 1; rem && p; p--){
            ll move(rem / 2);
            move = (move < v[p] ? move : v[p]);
            v[p] -= move;
            v[p - 1] += 3 * move;
            rem -= 2 * move;
        }

        ll total(0);
        for(ll p = 0; p < v.size(); p++){
            total += v[p] * (std::pow(3, p + 1) + p * std::pow(3, p - 1));
        }
        printf("%lld\n", total);
    }

}
