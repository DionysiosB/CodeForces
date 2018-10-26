#include <iostream>

int main(){

    long n; std::cin >> n;
    std::string s; std::cin >> s;

    long count(0);
    for(long p = 1; p < s.size(); p++){
        if(s[p - 1] == 'S' && s[p] == 'F'){++count;}
        else if(s[p - 1] == 'F' && s[p] == 'S'){--count;}
    }

    puts((count > 0) ? "YES" : "NO");

    return 0;
}
