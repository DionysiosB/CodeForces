#include <iostream>
typedef long long ll;

int main(){

    std::ios_base::sync_with_stdio(false);
    ll n, q; std::cin >> n >> q;

    while(q--){

        ll x; std::string s; std::cin >> x >> s;

        for(int p = 0; p < s.size(); p++){
            if(s[p]=='L'){
                if(x & 1){continue;}
                ll y = x & (-x);
                x -= (y / 2);
            }
            else if(s[p] == 'R'){
                if(x & 1){continue;}
                ll y = x & (-x);
                x += (y / 2);
            }
            else if(s[p]=='U'){
                if(x == (n + 1) / 2){continue;}  //The root is  (n + 1) / 2;
                ll y = x & (-x);
                if(x & (2 * y)){x -= y;}
                else x += y;
            }
        }

        std::cout << x << std::endl;
    }

    return 0;
}
