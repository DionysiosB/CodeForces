#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        bool done(false);
        for(long p = s.size() - 1; p >= 1; p--){
            long sum = s[p - 1] - '0' + s[p] - '0';
            if(sum > 9){
                s[p - 1] = ('0' + sum / 10);
                s[p] = ('0' + sum % 10);
                done = true; break;
            }
        }

        if(done){std::cout << s << std::endl; continue;}

        std::cout << ((char)(s[0] + s[1] - '0'));
        for(long p = 2; p < s.size(); p++){std::cout << s[p];}
        std::cout << std::endl;
    }

}
