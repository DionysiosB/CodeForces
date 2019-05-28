#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    std::string s; getline(std::cin, s);
    std::string t("");
    std::string w("");
    for(long p = 0; p < s.size(); p++){
        if('a' <= s[p] && s[p] <= 'z'){
            if(p > 0 && w.size() == 0){t += " ";}
            w += s[p];
        }
        else if(s[p] == ' '){t += w; w = "";}
        else{t += w; w = ""; t += s[p];}
    }

    if(t.size() == 0 || t[t.size() - 1] == ' '){t += w;}
    else if(w.size() > 0){t += ' '; t += w;}

    std::cout << t << std::endl;

    return 0;
}
