#include <iostream>

int main() {

    long n; std::cin >>n;
    std::string s; std::cin >> s; 

    for(long p = 0; p < n - 1; ++p){if(s[p] != '?' && s[p] == s[p+1]){puts("No"); return 0;}}
    for(int p = 0; p < n; ++p){
        if(s[p] == '?') {
            if(p == 0 || p == n - 1){puts("Yes"); return 0;}
            if(s[p+1] == '?'){puts("Yes"); return 0;}
            if(s[p-1] == s[p+1]){puts("Yes"); return 0;}
        }
    }

    puts("No"); 
    return 0;
}
