#include <iostream>
#include <vector>
#include <map>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string b; std::cin >> b;

        std::vector<bool> v(26, 0);
        for(long p = 0; p < n; p++){v[b[p] - 'a'] = 1;}
        std::string a("");
        for(long p = 0; p < 26; p++){
            if(!v[p]){continue;}
            a += (char)('a' + p);
        }

        std::map<char, char> m;
        for(long p = 0; p < a.size(); p++){m[a[p]] = a[a.size() - 1 - p];}
        for(long p = 0; p < b.size(); p++){b[p] = m[b[p]];}
        std::cout << b << std::endl;
    }

}
