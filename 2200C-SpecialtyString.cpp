#include <iostream>
#include <stack>

int main(){

    std::ios_base::sync_with_stdio(false);

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;

        std::stack<char> v;
        for(char x : s){
            if(v.empty() || v.top() != x){v.push(x);}
            else{v.pop();}
        }

        std::cout << (v.empty() ? "YES" : "NO") << std::endl;
    }

}
