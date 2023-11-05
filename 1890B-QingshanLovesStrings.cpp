#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n, m; std::cin >> n >> m;
        std::string s, t; std::cin >> s >> t;

        bool res(true);
        for(long p = 0; res && p + 1 < s.size(); p++){if(s[p] == s[p + 1]){res = false;}}
        if(res){std::cout << "YES" << std::endl; continue;} //No need for t;

        res = true; //start over;
        for(long p = 1; res && p < t.size(); p++){if(t[p] == t[p - 1]){res = false;}}
        if(t.size() % 2 == 0){res = false;}

        for(long p = 0; res && p + 1 < s.size(); p++){
            if(s[p] != s[p + 1]){continue;}
            else if(s[p] != t[0]){continue;}
            else{res = false;}
        }

        std::cout << (res ? "YES" : "NO") << std::endl;
    }

}
