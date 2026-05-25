#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string x; std::cin >> x;
        bool diff(false);
        std::string a(""), b("");
        for(long p = 0; p < x.size(); p++){
            if(x[p] == '0'){a += '0'; b += '0';}
            else if(x[p] == '1'){
                if(diff){a += '0'; b += '1';}
                else{a += '1'; b += '0'; diff = true;}
            }
            else if(x[p] == '2'){
                if(diff){a += '0'; b += '2';}
                else{a += '1'; b += '1';}
            }
        }

        std::cout << a << std::endl;
        std::cout << b << std::endl;
    }

    return 0;
}
