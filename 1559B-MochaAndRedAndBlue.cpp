#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        long idx(0); while(idx < n && s[idx] == '?'){++idx;}
        if(idx == n){s[--idx] = 'B';}
        for(long p = idx - 1; p >= 0; p--){if(s[p] == '?'){s[p] = (s[p + 1] == 'B') ? 'R' : 'B';}}
        for(long p = idx + 1; p < n; p++){if(s[p] == '?'){s[p] = (s[p - 1] == 'B') ? 'R' : 'B';}}
        std::cout << s << std::endl;
    }

}
