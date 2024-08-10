#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        long cost(0); std::vector<long> v;
        for(long p = 0; p < s.size(); p++){
            if(s[p] == '('){v.push_back(p);}
            else if(s[p] == ')'){cost += p - v.back(); v.pop_back();}
            else if(v.empty()){v.push_back(p);}
            else{cost += p - v.back(); v.pop_back();}
        }

        std::cout << cost << std::endl;
    }

}
