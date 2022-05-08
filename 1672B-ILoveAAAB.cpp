#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);

    long n; std::cin >> n;
    while(n--){
        std::string s; std::cin >> s;
        long cnt(0); bool res(true);
        if(s.back() != 'B'){res = false;}
        for(long p = 0; res && p < s.size(); p++){
            cnt += (s[p] == 'A') - (s[p] == 'B');
            if(cnt < 0){res = false; break;}
        }
        std::cout << (res ? "YES" : "NO") << std::endl;
    }

}
