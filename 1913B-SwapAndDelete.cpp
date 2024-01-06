#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        long z(0), a(0);
        for(long p = 0; p < s.size(); p++){
            z += (s[p] == '0');
            a += (s[p] == '1');
        }

        long ans(0);
        for(long p = 0; !ans && p < s.size(); p++){
            if(s[p] == '1'){
                if(z > 0){--z;}
                else{ans = s.size() - p; break;}
            }
            else if(s[p] == '0'){
                if(a > 0){--a;}
                else{ans = s.size() - p; break;}
            }
        }

        std::cout << ans << std::endl;
    }

}
