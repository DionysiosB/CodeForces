#include <iostream>

bool check(std::string &s, long idx){
    if(idx < 0){return false;}
    if(idx + 3 >= s.size()){return false;}
    if(s[idx] == '1' && s[idx + 1] == '1' && s[idx + 2] == '0' && s[idx + 3] == '0'){return true;}
    return false;
}

long scount(std::string &s, long idx){
    long total(0);
    for(long p = -3; p <= 3; p++){total += check(s, idx + p);}
    return total;
}

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        long q; std::cin >> q;

        long cnt(0);
        for(long p = 0; p < s.size(); p++){cnt += check(s, p);}

        while(q--){
            long pos, b; std::cin >> pos >> b;
            cnt -= scount(s, pos - 1);
            s[pos - 1] = ('0' + b);
            cnt += scount(s, pos - 1);
            std::cout << (cnt ? "YES" : "NO") << std::endl;
        }
    }

}
