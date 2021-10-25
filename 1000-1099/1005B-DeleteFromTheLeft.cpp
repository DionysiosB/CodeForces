#include <iostream>

int main(){

    std::string s, t; std::cin >> s >> t;

    long moves(0);
    bool diff(false);
    for(long p = s.size() - 1, q = t.size() - 1; p >= 0 || q >= 0; p--, q--){
        if(p < 0 || q < 0){++moves; continue;}
        
        if(s[p] != t[q]){diff = true;}
        if(diff){moves += 2;}
    }

    std::cout << moves << std::endl;

    return 0;
}
