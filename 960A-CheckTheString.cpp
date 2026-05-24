#include <iostream>

int main(){

    std::string s; std::cin >> s;
    long state(-1), a(0), b(0), c(0);
    bool possible(true);
    for(long p = 0; p < s.size(); p++){
        if(s[p] == 'a'){
            ++a;
            if(state > 0){possible = false; break;}
            state = 0;
        }
        else if(s[p] == 'b'){
            ++b;
            if(state < 0 || state == 2){possible = false; break;}
            state = 1;
        }
        if(s[p] == 'c'){
            ++c;
            if(state <= 0){possible = false; break;}
            state = 2;
        }
    }
    
    if(state < 2){possible = false;}
    if(c != a && c != b){possible = false;}
    puts(possible ? "YES" : "NO");

    return 0;
}
