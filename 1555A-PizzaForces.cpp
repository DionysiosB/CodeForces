#include <cstdio>
#include <vector>
typedef long long ll;


//2.5 minutes per slice for all three choices; LCP[6,8,10] = 120;

int main(){

    ll t; scanf("%lld", &t);
    std::vector<ll> time(120, 300);
    for(ll a = 0; a <= 20; a++){
        for(ll b = 0; b <= 15; b++){
            for(ll c = 0; c <= 12; c++){
                ll slices = 6 * a + 8 * b + 10 * c;
                if(slices >= 120){continue;}
                ll dur = 15 * a + 20 * b + 25 * c;
                time[slices] = time[slices] < dur ? time[slices] : dur;
            }
        }
    }

    ll cur(time.back());
    for(long p = time.size() - 1; p > 0; p--){
        cur = (cur < time[p]) ? cur : time[p];
        time[p] = cur;
    }
    time[0] = 0;

    while(t--){
        ll n; scanf("%lld", &n);
        ll res = (n / 120) * 300 + time[n % 120];
        printf("%lld\n", res);
    }

}
