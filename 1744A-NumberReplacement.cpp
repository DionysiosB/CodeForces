#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::vector<long> a(n); for(long p = 0; p < n; p++){std::cin >> a[p];}
        std::string s; std::cin >> s;
        std::vector<char> v(100, '_');
        bool possible(true);
        for(long p = 0; possible && p < a.size(); p++){
            if(v[a[p]] == '_'){v[a[p]] = s[p];}
            else if(v[a[p]] != s[p]){possible = false; break;}
        }

        std::cout << (possible ? "YES" : "NO") << std::endl;
    }

}
