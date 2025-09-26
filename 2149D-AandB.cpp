#include <iostream>
#include <vector>
typedef long long ll;

int main(){

    std::ios_base::sync_with_stdio(false);
    ll t; std::cin >> t;
    while(t--){
        ll n; std::cin >> n;
        std::string s; std::cin >> s;
        std::vector<ll> a, b;
        for(ll p = 0; p < s.size(); p++){
            if(s[p] == 'a'){a.push_back(p);}
            else{b.push_back(p);}
        }

        ll med(0), cnt(0);
        if(a.size()){
            med = a.size() / 2;
            for(ll p = 0; p < a.size(); p++){
                ll dist = (a[med] - a[p]) -  (med - p);
                if(dist < 0){dist = -dist;}
                cnt += dist;
            }
        }

        ll ans(cnt);
        cnt = 0;
        if(b.size()){
            med = b.size() / 2;
            for(ll p = 0; p < b.size(); p++){
                ll dist = (b[med] - b[p]) -  (med - p);
                if(dist < 0){dist = -dist;}
                cnt += dist;
            }
        }

        ans = (ans < cnt ? ans : cnt);
        std::cout << ans << std::endl;
    }


}
