#include <iostream>

int main(){

    long n; std::cin >> n;
    std::string s; std::cin >> s;
    long cnt(0), par(0);
    for(long p = 0; p < n; p++){
        if(s[p] == '('){++par;}
        else if(s[p] == ')'){--par;}
        else if(s[p] == '?'){++cnt;}
    }

    if(s.size() % 2){std::cout << ":(" << std::endl; return 0;}

    for(long p = 0; (p < n) && cnt; p++){
        if(s[p] != '?'){continue;}
        if(cnt > par){s[p] = '('; ++par;}
        else{s[p] = ')'; --par;}
        --cnt;
    }

    bool possible(true);
    par = 0;
    for(long p = 0; p < n; p++){
        if(s[p] == '('){++par;}
        else if(s[p] == ')'){--par;}
        if(p + 1 < n && par <= 0){possible = false;}
    }

    if(par != 0){possible = false;}

    std::cout << (possible ? s : ":(") << std::endl;

    return 0;
}
