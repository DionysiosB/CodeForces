#include <iostream>
#include <vector>
typedef long long ll;

int main(){

    std::ios::sync_with_stdio(false);
    ll t; std::cin >> t;
    while(t--){
        ll n, a, b; std::cin >> n >> a >> b;
        std::string s; std::cin >> s;
        std::vector<ll> v(n, 1e16);
        ll nxt(1e16);
        for(ll p = v.size() - 1; p >= 0; p--){v[p] = nxt; nxt = (s[p] == '1') ? p : nxt;}
        ll cost(n * a + (n + 1) * b);
        bool state(0);
        for(ll p = 1; p < s.size(); p++){
            if(s[p] == s[p - 1]){cost += state * b;}
            else if(s[p] == '1'){
                cost += (1 - state) * a + b;
                state = 1;
            }
            else if(s[p] == '0'){
                state = ((v[p] - p - 1) * b < 2 * a);
                cost += (1 - state) * a + state * b;
            }

            std::cout << p  << "   \t  " << s[p] << "   \t   " << (state ? 1 : 0) << "\t-> " << cost << std::endl;
            
        }

        std::cout << cost << std::endl;
    }

    return 0;
}
