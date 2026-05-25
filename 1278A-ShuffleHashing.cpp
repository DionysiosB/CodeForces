#include <iostream>
#include <vector>

bool allzeros(std::vector<long> v){
    for(long p = 0; p < v.size(); p++){if(v[p]){return false;}}
    return true;
}

int main(){

    const int N = 26;
    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        std::vector<long> f(N, 0); for(long p = 0; p < s.size(); p++){++f[s[p] - 'a'];}

        std::string r; std::cin >> r;
        if(r.size() < s.size()){std::cout << "NO" << std::endl; continue;}
        for(long p = 0; p < s.size(); p++){--f[r[p] - 'a'];}

        if(allzeros(f)){std::cout << "YES" << std::endl; continue;}
        bool ans(false);
        for(long p = s.size(); p < r.size(); p++){
            ++f[r[p - s.size()] - 'a']; --f[r[p] - 'a'];
            if(allzeros(f)){ans = true; break;}
        }

        std::cout << (ans ? "YES" : "NO") << std::endl;
    }

    return 0;
}
