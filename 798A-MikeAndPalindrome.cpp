#include <iostream>

int main(){

    std::string s; std::cin >> s;
    long pos(-1); bool possible(true);
    size_t n = s.size();
    for(long p = 0; p < n / 2; p++){
        if(s[p] == s[n - 1 - p]){continue;}
        if(pos < 0){pos = p;}
        else{possible = false; break;}
    }

    puts( (!possible || ((pos < 0) && (n % 2 == 0))) ? "NO" : "YES");

    return 0;
}
