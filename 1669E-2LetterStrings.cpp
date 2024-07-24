#include <iostream>
#include <vector>
#include <set>
typedef long long ll;

int main(){

    const int B = 12;
    ll t; std::cin >> t;
    while(t--){
        ll n; std::cin >> n;
        std::vector<std::vector<ll> > m(B, std::vector<ll>(B, 0));
        ll total(0);
        for(ll p = 0; p < n; p++){
            std::string s; std::cin >> s;
            ++m[s[0] - 'a'][s[1] - 'a'];
        }

        std::vector<ll> rs(B, 0), cs(B, 0);
        for(ll row = 0; row < B; row++){
            for(ll col = 0; col < B; col++){
                rs[row] += m[row][col];
                cs[col] += m[row][col];
            }
        }

        for(ll row = 0; row < B; row++){
            for(ll col = 0; col < B; col++){
                total += m[row][col] * (rs[row] - m[row][col]);
                total += m[row][col] * (cs[col] - m[row][col]);
            }
        }

        std::cout << (total / 2) << std::endl;
    }

}
