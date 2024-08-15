#include <iostream>
#include <vector>
#include <map>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::vector<long> a(n); for(long p = 0; p < n; p++){std::cin >> a[p];}
        long m; std::cin >> m;
        while(m--){
            std::map<long, char> numtochar;
            std::map<char, long> chartonum;
            std::string s; std::cin >> s;
            if(s.size() != n){std::cout << "NO" << std::endl; continue;}
            bool res(true);
            for(long p = 0; res && p < s.size(); p++){
                long f(a[p]); char g(s[p]);
                if(numtochar.count(f) ^ chartonum.count(g)){res = false;}
                if(!numtochar.count(f)){numtochar[f] = g; chartonum[g] = f;}
                else if(numtochar[f] != g || chartonum[g] != f){res = false;}
            }
            std::cout << (res ? "YES" : "NO") << std::endl;
        }

    }

}
