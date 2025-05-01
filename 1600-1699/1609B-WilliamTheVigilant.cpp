#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long n, q; std::cin >> n >> q;
    std::string s; std::cin >> s;
    long cnt(0);
    for(long p = 2; p < s.size(); p++){cnt += (s[p - 2] == 'a' && s[p - 1] == 'b' && s[p] == 'c');}
    while(q--){
        long w; char c; std::cin >> w >> c;
        --w;
        if(s[w] != c && c == 'a'){
            if(w >= 2 && s[w - 2] == 'a' && s[w - 1] == 'b' && s[w] == 'c'){--cnt;}
            if(w >= 1 && s[w - 1] == 'a' && s[w] == 'b' && w + 1 < s.size() && s[w + 1] == 'c'){--cnt;}
            s[w] = c;
            if(w + 2 < s.size() && s[w + 1] == 'b' && s[w + 2] == 'c'){++cnt;}
        }
        else if(s[w] != c && c == 'b'){
            if(w >= 2 && s[w - 2] == 'a' && s[w - 1] == 'b' && s[w] == 'c'){--cnt;}
            if(w + 2 < s.size() && s[w] == 'a' && s[w + 1] == 'b' && s[w + 2] == 'c'){--cnt;}
            s[w] = c;
            if(w >= 1 && s[w - 1] == 'a' && s[w] == 'b' && w + 1 < s.size() && s[w + 1] == 'c'){++cnt;}
        }
        else if(s[w] != c && c == 'c'){
            if(w + 2 < s.size() && s[w] == 'a' && s[w + 1] == 'b' && s[w + 2] == 'c'){--cnt;}
            if(w >= 1 && s[w - 1] == 'a' && s[w] == 'b' && w + 1 < s.size() && s[w + 1] == 'c'){--cnt;}
            s[w] = c;
            if(w >= 2 && s[w - 2] == 'a' && s[w - 1] == 'b' && s[w] == 'c'){++cnt;}
        }

        std::cout << cnt << std::endl;
    }

}
