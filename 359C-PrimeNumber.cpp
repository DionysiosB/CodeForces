#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;


ll modPower(ll b, ll x, ll MOD) {   

    if(x <= 0){return 1;}
    ll tmp = modPower(b, x / 2, MOD);
    ll res = ((tmp * tmp) % MOD) * (x % 2 ? b : 1);
    return res % MOD;
}

int main() {

    const ll MOD = 1000000007;
    ll n, x; scanf("%lld %lld", &n, &x);
    std::vector<ll> a(n), d(n);
    ll s(0);
    for(int p = 0; p < n; p++){scanf("%lld", &a[p]); s += a[p];}
    for(int p = 0; p < n; p++){d[p] = s - a[p];}
    sort(d.rbegin(), d.rend());

    ll fn(0);
    while (true) {
        ll cur = d.back();
        long cnt = 0;
        while(d.size() > 0 && d.back() == cur){++cnt; d.pop_back();}
        if(cnt > 0 && cnt % x == 0){
            cnt /= x;
            for(long p = 0; p < cnt; p++){d.push_back(cur + 1);}
        }
        else{fn = cur; break;}
    }

    fn = (fn < s) ? fn : s;
    printf("%lld\n", modPower(x, fn, MOD));

    return 0;
}
