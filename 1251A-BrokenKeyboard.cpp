#include <iostream>
#include <vector>

int main(){

    const long N = 26;
    long q; std::cin >>q;
    while(q--){
        std::string s; std::cin >> s;
        std::vector<int> w(N, 0);
        long cnt(1);
        for(long p = 1; p < s.size(); p++){
            if(s[p] == s[p - 1]){++cnt;}
            else{w[s[p - 1] - 'a'] |= (cnt % 2); cnt = 1;}
        }
        w[s.back() - 'a'] |= (cnt % 2);


        for(long p = 0; p < N; p++){if(w[p]){std::cout << (char)('a' + p);}}
        std::cout << std::endl;
    }

    return 0;
}
