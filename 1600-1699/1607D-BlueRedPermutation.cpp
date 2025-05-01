#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::vector<long> v(n); for(long p = 0; p < n; p++){std::cin >> v[p];}
        std::string s; std::cin >> s;
        std::vector<long> b, r;
        for(long p = 0; p < n; p++){
            if(s[p] == 'B'){b.push_back(v[p]);}
            else{r.push_back(v[p]);}
        }

        sort(b.begin(), b.end());
        sort(r.begin(), r.end());

        bool res(true);
        for(long p = 1; p <= b.size(); p++){if(p > b[p - 1]){res = false; break;}}
        for(long p = b.size() + 1; p <= n; p++){if(p < r[p - b.size() - 1]){res = false; break;}}
        std::cout << (res ? "YES" : "NO") << std::endl;
    }

}
