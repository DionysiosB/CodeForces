#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        long res(0);
        for(long p = 0; p < s.size(); p++){
            if(s[p] != '0'){continue;}
            if(s[p - 1] == '0'){res += 2;}
            else if(p > 1 && s[p - 2] == '0'){res += 1;}
        }

        printf("%ld\n", res);
    }

}
