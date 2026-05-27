#include <iostream>
#include <set>
#include <map>
typedef long long ll;

int main(){

    std::ios_base::sync_with_stdio(false);
    ll q; std::cin >> q;
    std::set<ll> s;
    std::map<ll, ll> m;

    while(q--){
        std::string u; ll x;
        std::cin >> u >> x;
        if(u == "+"){s.insert(x);}
        else if(u == "?"){
            while(s.count(m[x] + x)){m[x] += x;}
            std::cout << (m[x] + x) << std::endl;
        }
    }

    return 0;
}
