#include <iostream>
#include <vector>
typedef long long ll;

int main(){

    std::ios_base::sync_with_stdio(false);
    ll t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        std::vector<ll> v;
        for(ll p = 0; p < s.size(); p++){if(s[p] == '*'){v.push_back(p);}}
        if(v.size() <= 0){std::cout << "0" << std::endl; continue;}
        ll middle = v.size() / 2;
        ll medpos = v[middle];
        ll total(0); 
        for(ll p = 0; p < v.size(); p++){
            ll target = medpos + (p - middle);
            ll dist = v[p] - target; if(dist < 0){dist = -dist;}
            total += dist;
        }

        std::cout << total << std::endl;
    }

}
