#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;

        long left(0); while(left < s.size() && s[left] == '0'){++left;}
        long right(s.size() - 1); while(right >= 0 && s[right] == '1'){--right;}

        std::vector<long> v;
        while(left < right){
            v.push_back(left); ++left;
            v.push_back(right); --right;
            while(left < s.size() && s[left] == '0'){++left;}
            while(right >= 0 && s[right] == '1'){--right;}
        }

        if(v.size() > 0){
            sort(v.begin(), v.end());
            std::cout << "1\n" << v.size();
            for(long p = 0; p < v.size(); p++){std::cout << " " << (1 + v[p]);}
            std::cout << std::endl;
        }
        else{std::cout << "0" << std::endl;}
    }

}
