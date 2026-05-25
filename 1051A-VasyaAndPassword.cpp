#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        long cap(0), sml(0), num(0);
        long xc(0), xs(0), xn(0);
        for(long p = 0; p < s.size(); p++){
            if('A' <= s[p] && s[p] <= 'Z'){++cap; xc = p;}
            else if('a' <= s[p] && s[p] <= 'z'){++sml; xs = p;}
            else if('0' <= s[p] && s[p] <= '9'){++num; xn = p;}
        }

        if(cap == 0 && sml == 0){s[0] = 'A'; s[1] = 'a';}
        else if(cap == 0 && num == 0){s[0] = 'A'; s[1] = '0';}
        else if(sml == 0 && num == 0){s[0] = '0'; s[1] = 'a';}
        else if(cap == 0){s[num > 1 ? xn : xs] = 'A';}
        else if(sml == 0){s[num > 1 ? xn : xc] = 'a';}
        else if(num == 0){s[sml > 1 ? xs : xc] = '0';}
        
        std::cout << s << std::endl;
    }

    return 0;
}
