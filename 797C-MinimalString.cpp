#include <iostream>
#include <vector>
#include <stack>

int main (){

    std::ios_base::sync_with_stdio(false);
    std::string s; std::cin >>s;
    long n = s.size();
    std::vector<char> mn(n + 1, 'z' + 1);
    std::stack<char> t;

    for(long p = n - 1; p >= 0; p--){mn[p] = mn[p + 1] < s[p] ? mn[p + 1] : s[p];}
    int ind = 0;
    while((!t.empty()) || (ind < n)){
        while (!t.empty() && t.top() <= mn[ind]){std::cout << t.top(); t.pop();}
        if(ind == n){break;}
        t.push(s[ind++]);
    }

    std::cout << std::endl;
    
    return 0;
}
