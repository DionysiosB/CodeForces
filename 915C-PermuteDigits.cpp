#include <iostream>
typedef long long ll;

int main() {

    std::string sa; std::cin >> sa;
    ll t; std::cin >> t;
    ll cnt[10] = {0}; for(int p = 0; p < sa.size(); p++){++cnt[sa[p] - '0'];}
    ll ans(0);

    for(int p = 1; p <= sa.size(); p++) {
        ll res(ans);
        for(int d = 9; d >= 0; d--){
            if(cnt[d] <= 0){continue;}
            ll cur = res * 10 + d;
            --cnt[d];
            for(int k = 0; k <= 9; k++){for(int tr = 0; tr < cnt[k]; tr++){cur = cur * 10 + k;}}
            if(cur <= t){ans = ans * 10 * 1LL + d; break;}
            ++cnt[d];
        }
    }

    std::cout << ans << std::endl;

    return 0;
}
