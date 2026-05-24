#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);

    long n, k; std::cin >> n >> k;
    std::string s; std::cin >> s;
    std::string t; t = s;

    for(long p = 0; p < s.size(); p++){
        char c = s[p];
        int da = c - 'a';
        int dz = 'z' - c;
        int d  = (da > dz) ? da : dz;
        char x = (da > dz) ? 'a' : 'z';

        if(d < k){t[p] = x; k -= d;}
        else{t[p] = s[p] + (da > dz ? (-1) : 1) * k; k = 0; break;}
    }

    if(k){std::cout << -1 << std::endl;}
    else{std::cout << t << std::endl;}

    return 0;
}
