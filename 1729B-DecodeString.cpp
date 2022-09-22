#include <iostream>
#include <string>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        std::string dec("");
        long idx(n - 1);
        while(idx >= 0){
            long rank(0);
            if(s[idx] == '0'){
                rank = 10 * (s[idx - 2] - '0') + (s[idx - 1] - '0');
                idx -= 3;
            }
            else{
               rank = (s[idx] - '0');
               idx--;
            }
            
            char x = 'a' + rank - 1;
            dec = x + dec;
        }

        std::cout << dec << std::endl;

    }

}
