#include <iostream>

int main(){

    const int N = 26;
    std::ios_base::sync_with_stdio(false);
    long n, k; std::cin >> n >> k;
    std::string s; std::cin >> s;

    long rem(k);
    for(long u = 0; u < N; u++){
        char c = 'a' + u;
        if(rem <= 0){break;}

        for(long p = 0; p < s.size(); p++){
            if(s[p] == c){
                s[p] = '_'; 
                --rem; if(rem <= 0){break;}
            }
        }
    }

    for(long p = 0; p < s.size(); p++){
        if(s[p] == '_'){continue;}
        std::cout << s[p];
    }

    std::cout << std::endl;

    return 0;
}
