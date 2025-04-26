#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;

        int v[10] = {0};
        for(long p = 0; p < s.size(); p++){++v[s[p] - '0'];}

        std::string w(s);
        for(long p = 0; p < w.size(); p++){
            for(long u = 9 - p; u < 10; u++){
                if(!v[u]){continue;}
                w[p] = '0' + u;
                --v[u];
                break;
            }
        }

        std::cout << w << std::endl;
    }

}
