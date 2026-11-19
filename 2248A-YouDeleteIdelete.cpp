#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);

    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        bool z(0), a(0);
        for(char x : s){
            if(x == '0'){
                if(!z){z = 1; continue;}
                std::cout << x;
            }
            if(x == '1'){
                if(!a){a = 1; continue;}
                std::cout << x;
            }

        }
        std::cout << std::endl;
    }

}
