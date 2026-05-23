#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    std::string s; std::cin >> s;

    long cnt(0), t(0);
    for(long p = 0; p < s.size(); p++){
        if(s[p] == 'M'){++cnt;}
        else if(cnt){t = ((t + 1) > cnt) ? (t + 1) : cnt;}
    }

    printf("%ld\n", t);

    return 0;
}
