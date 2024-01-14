#include <iostream>
#include <vector>

bool vowel(char x){return (x == 'a' || x == 'e');}

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;

        std::vector<long> v;
        for(long p = 0; p < s.size(); p++){if(vowel(s[p])){v.push_back(p);}}
        for(long p = 0; p < v.size(); p++){
            long idx = v[p];
            std::cout << s[idx - 1] << s[idx];
            if(p + 1 < v.size() && v[p + 1] == idx + 3){std::cout << s[idx + 1];}
            else if(idx + 2 == s.size()){std::cout << s[idx + 1];}
            if(p + 1 < v.size()){std::cout << '.';}
        }

        std::cout << std::endl;
    }

}
