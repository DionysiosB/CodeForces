#include <iostream>
#include <stack>

int main(){

    std::string s; std::cin >> s;
    long cnt(0);
    std::stack<long> t;
    for(long p = 0; p < s.size(); p++){
        if(t.size() > 0 && t.top() == s[p]){t.pop(); ++cnt;}
        else{t.push(s[p]);}
    }

    std::cout << (cnt % 2 ? "Yes" : "No") << std::endl;

    return 0;
}
