#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    std::ios_base::sync_with_stdio(false);

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        std::vector<long> v, w;
        for(long p = 0; p < n; p++){
            if(s[p] == '1'){v.push_back(p + 1);}
            else if(s[p] == '2' && !v.empty()){w.push_back(p + 1); v.pop_back();}
        }

        long dnp = (v.size() + w.size());
        std::cout << dnp << std::endl;

        for(long x : v){w.push_back(x);}
        sort(w. begin(), w.end());

        for(long x : w){std::cout << x << " ";}
        std::cout << std::endl;
    }

}
