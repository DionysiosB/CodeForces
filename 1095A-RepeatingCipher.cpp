#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long n; std::string s; std::cin >> n >> s;


    long r(0), cnt(0); std::string t("");
    for(long p = 0; p < n; p++){
        if(r == 0){t += s[p]; r = ++cnt;}
        else{--r;}
    }

    std::cout << t << std::endl;

    return 0;
}
