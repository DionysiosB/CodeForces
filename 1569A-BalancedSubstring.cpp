#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        long left(-1), right(-1);
        for(long p = 1; p < s.size(); p++){if(s[p - 1] != s[p]){left = p; right = p + 1; break;}}
        std::cout << left << " " << right << std::endl;
    }

}
