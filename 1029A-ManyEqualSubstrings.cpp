#include <iostream>

int main(){

    long n, k; std::cin >> n >> k;
    std::string s; std::cin >> s;

    long fold(s.size());
    for(long d = 1; d < s.size(); p++){
        bool possible(true);
        for(long q = 0; q + d < s.size(); q++){
            if(s[q] != s[q + d]){possible = false;}
        }

        if(possible){fold = d; break;}
    }





    return 0;
}
