#include <iostream>

int main(){

    std::string s; std::cin >> s;
    long n; std::cin >> n;

    bool possible(true);
    while(n--){
        std::string t; std::cin >> t;
        if(s.size() != t.size()){continue;}
        bool similar(true);
        for(long p = 0; p < s.size(); p++){
            if(tolower(s[p]) == tolower(t[p])){continue;}

            if(tolower(s[p]) == 'o' && t[p] == '0'){continue;}
            if(tolower(t[p]) == 'o' && s[p] == '0'){continue;}

            if(s[p] == '1' && tolower(t[p]) == 'l'){continue;}
            if(s[p] == '1' && tolower(t[p]) == 'i'){continue;}
            if(tolower(s[p]) == 'i' && t[p] == '1'){continue;}
            if(tolower(s[p]) == 'i' && tolower(t[p]) == 'l'){continue;}
            if(tolower(s[p]) == 'l' && t[p] == '1'){continue;}
            if(tolower(s[p]) == 'l' && tolower(t[p]) == 'i'){continue;}

            similar = false; break;
        }

        if(similar){possible = false; break;}
    }

    std::cout << (possible ? "Yes" : "No") << std::endl;

    return 0;
}
