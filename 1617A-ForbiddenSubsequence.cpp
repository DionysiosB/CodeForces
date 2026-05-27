#include <iostream>
#include <algorithm>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        std::string s, u; std::cin >> s >> u;
        long a(0), b(0), c(0);
        for(long p = 0; p < s.size(); p++){
            a += (s[p]== 'a');
            b += (s[p]== 'b');
            c += (s[p]== 'c');
        }

        sort(s.begin(), s.end());
        if(a == 0 || b == 0 || c == 0 || u != "abc"){
            std::cout << s << std::endl;
            continue;
        }

        for(long p = 0; p < a; p++){std::cout << "a";}
        for(long p = 0; p < c; p++){std::cout << "c";}
        for(long p = 0; p < b; p++){std::cout << "b";}
        for(long p = 0; p < s.size(); p++){if(s[p] > 'c'){std::cout << s[p];}}
        std::cout << std::endl;
    }

}
