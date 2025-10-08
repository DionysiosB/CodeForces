#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        long len; std::cin >> len;
        std::string s; std::cin >> s;

        std::string t(s.size(), '_');
        if(s[0] != '9'){for(long p = 0; p < s.size(); p++){t[p] = '0' + ('9' - s[p]);}}
        else{
            int carry(0);
            for(long p = s.size() - 1; p >= 0; p--){
                int a = 1 - carry;
                int b = s[p] - '0';
                int diff = a - b;
                if(diff < 0){carry = 1; diff += 10;}
                else{carry = 0;}
                t[p] = (char)(diff + '0');
            }
        }

        std::cout << t << std::endl;
    }

}
