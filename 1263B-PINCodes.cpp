#include <iostream>
#include <set>
#include <vector>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::vector<std::string> pv;
        std::set<std::string> pset;
        long cnt(0);
        for(long p = 0; p < n; p++){
            std::string s; std::cin >> s;
            if(pset.count(s)){
                ++cnt;
                bool done(false);
                for(long idx = 0; idx < s.size(); idx++){
                    if(done){break;}
                    for(long d = 1; d <= 9; d++){
                        if(done){break;}
                        int x = s[idx] - '0';
                        x += d; x %= 10;
                        std::string t = s; t[idx] = (x + '0');
                        if(!(pset.count(t))){s = t; done = true; break;}
                    }
                }
            }
            pv.push_back(s);
            pset.insert(s);
        }

        std::cout << cnt << std::endl;
        for(long p = 0; p < n; p++){std::cout << pv[p] << std::endl;}
    }

    return 0;
}
