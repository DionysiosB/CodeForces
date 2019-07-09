#include <iostream>

int main(){

    long n; std::cin >> n;
    std::string s; std::cin >> s;

    std::string t(""); bool done(0);
    for(long p = 0; p < n; p++){
        if((!done) && (p + 1 < n) && (s[p] > s[p + 1])){done = 1;}
        else if((!done) && (p + 1 == n)){done = 1;}
        else{t += s[p];}
    }

    std::cout << t << std::endl;

    return 0;
}
