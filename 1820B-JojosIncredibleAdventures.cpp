#include <iostream>
typedef long long ll;

int main(){

    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        ll len = s.size();
        ll mx(0), cnt(0);
        bool z(false);
        for(ll p = 0; p < 2 * len; p++){
            if(s[p % len] == '1'){++cnt;}
            else{z = true; cnt = 0;}
            mx = (mx > cnt) ? mx : cnt;
        }

        ll res = z ? ((mx + 1) / 2) * ((mx + 2) / 2) : (len * len);
        std::cout << res << std::endl;
    }

}
