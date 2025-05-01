#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);

    long t; std::cin >> t;
    while(t--){
        long a, b; std::cin >> a >> b;
        std::string s("");

        if(a >= b){s = "0"; --a;}
        else{s = "1"; --b;}


        while(a > 0 || b > 0){
            if(s.back() == '0'){
                if(b > 0){s += '1'; --b;}
                else if(a > 0){s += '0'; --a;}
                
            }
            else if(s.back() == '1'){
                if(a > 0){s += '0'; --a;}
                else if(b > 0){s += '1'; --b;}
                
            }
        }

        std::cout << s << std::endl;

    }

}
