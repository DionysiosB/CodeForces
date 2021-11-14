#include <iostream>
#include <vector>

int main(){

    const int L = 26;
    long t; std::cin >> t; 
    while(t--){
        std::string keyboard; std::cin >> keyboard;
        std::vector<long> v(L, 0);
        for(long p = 0; p < L; p++){v[keyboard[p] - 'a'] = p;}
        std::string s; std::cin >> s;
        long pos = v[s[0] - 'a'];
        long dist(0);
        for(long p = 1; p < s.size(); p++){
            long nextPos = v[s[p] - 'a'];
            long diff = nextPos - pos;
            dist += (diff > 0) ? diff : -diff;
            pos = nextPos;
        }

        std::cout << dist << std::endl;
    }

}
