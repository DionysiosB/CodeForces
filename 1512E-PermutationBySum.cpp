#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n, l, r, s; scanf("%lld %lld %lld %lld", &n, &l, &r, &s);
        std::vector<ll> from(n + 1, -1); for(ll p = 1; p <= n; p++){from[p] = p;}
        std::vector<ll> to(n + 1, -1); 

        ll idx(n), cnt(r - l + 1);
        for(ll p = l; p <= r; p++){
            for(ll q = idx; q >= 1; q--){
                ll rem = r - p + 1;
                ll lower = rem * (rem + 1) / 2;
                ll upper = lower + rem * (q - rem);
                ll lb = (rem - 1) * rem / 2;
                if(s < lower || s > upper){break;}
                if(s - q < lb){continue;}
                to[p] = q; s -= q; --cnt; from[q] = -1; idx = q - 1;
            }
        }

        if(s != 0 || cnt > 0){puts("-1");continue;}

        idx = 1;
        for(ll p = 1; p <= n; p++){
            if(p >= l && p <= r){continue;}
            while(from[idx] < 0){++idx;}
            to[p] = from[idx]; from[idx++] = -1;
        }

        for(ll p = 1; p <= n; p++){printf("%lld ", to[p]);}
        puts("");
    }

}
