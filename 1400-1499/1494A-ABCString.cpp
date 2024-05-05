#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        int f[3] = {0};
        f[s[0] - 'A'] = 1;
        f[s.back() - 'A'] = -1;
        long cnt(0); for(long p = 0; p < s.size(); p++){cnt += f[s[p] - 'A'];}
        for(long p = 0; p < 3; p++){if(f[p] == 0){f[p] = 1 - 2 * (cnt > 0);}}

        cnt = 0;
        std::string res("YES");
        for(long p = 0; p < s.size(); p++){
            cnt += f[s[p] - 'A'];
            if(cnt < 0){res = "NO"; break;}
        }

        if(cnt){res = "NO";}

        std::cout << res << std::endl;
    }

}
