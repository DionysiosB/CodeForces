#include <iostream>
typedef long long ll;

int main(){

    std::ios_base::sync_with_stdio(false);

    ll t; std::cin >> t;
    while(t--){
        ll n, m; std::cin >> n >> m;
        ll sr(0), sc(0), cnt(0);
        for(ll row = 0; row < n; row++){
            std::string s; std::cin >> s;
            for(long col = 0; col < s.size(); col++){
                if(s[col] == '.'){continue;}
                sr += 1 + row; sc += 1 + col; ++cnt;
            }
        }

        std::cout << (sr / cnt) << " " << (sc / cnt) << std::endl;
    }

}
