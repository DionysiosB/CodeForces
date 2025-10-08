#include <iostream>
#include <vector>
#include <set>

int main(){

    std::ios_base::sync_with_stdio(false);

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;

        std::vector<std::string> v(n);
        std::set<std::string> f; 
        for(long p = 0; p < n; p++){std::cin >> v[p]; f.insert(v[p]);}

        std::vector<int> res(n, 0);
        for(long p = 0; p < n; p++){
            std::string cur = v[p];
            for(long len = 1; len < cur.size(); len++){
                std::string x = cur.substr(0, len);
                std::string y = cur.substr(len);
                if(f.count(x) && f.count(y)){res[p] = 1;}
                f.insert(cur);
            }
        }

        for(long p = 0; p < n; p++){std::cout << res[p];}
        std::cout << std::endl;
    }

}
