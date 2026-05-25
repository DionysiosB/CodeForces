#include <iostream>

int main(){

    long n, k; std::cin >> n >> k;
    std::string s; std::cin >> s;
    
    if(k == 0){std::cout << s << std::endl;}
    else if(s.size() == 1){std::cout << "0" << std::endl;}
    else{
        if(s[0] != '1'){s[0] = '1'; --k;}
        for(long p = 1; p < s.size() && k > 0; p++){
            if(s[p] == '0'){continue;}
            s[p] = '0'; --k;
        }

        std::cout << s << std::endl;
    }

    return 0;
}
