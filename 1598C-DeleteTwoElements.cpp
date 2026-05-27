#include <cstdio>
#include <map>
typedef long long ll;


int main(){

    ll t; scanf("%lld", &t);
    while(t--){

        ll n; scanf("%lld", &n);
        std::map<ll, ll> cnt; ll sum(0);
        for(ll p = 0; p < n; p++){
            ll x; scanf("%lld", &x);
            ++cnt[x];
            sum += x;
        }

        ll check = 2 * sum / n;
        bool possible = (n * check == 2 * sum);
        ll res(0);

        if(!possible){puts("0"); continue;}
        for(std::map<ll, ll>::iterator it = cnt.begin(); it != cnt.end(); it++){
            ll key = it->first;
            if(2 * key > check){continue;}
            ll left = it->second;
            ll right = cnt.count(check - key) ? cnt[check - key] : 0;
            res += (2 * key == check) ? (left * (left - 1) / 2) : (left * right);
        }

        printf("%lld\n", res);

    }

}
