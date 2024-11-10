#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        std::string r; std::cin >> r;
        long a(0), z(0);
        for(long p = 0; p < s.size(); p++){
            z += (s[p] == '0');
            a += (s[p] == '1');
        }

        bool res(true);
        for(long p = 0; p < n - 1 && res; p++){
            if(!z || !a){res = false;}
            if(r[p] == '0'){--a;}
            else{--z;}
        }

        std::cout << (res ? "YES" : "NO") << std::endl;
    }

}
