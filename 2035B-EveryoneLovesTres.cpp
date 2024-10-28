#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string res("-1");
        if(n == 1 || n == 3){res = "-1";}
        else if(n % 2){res = std::string(n - 5, '3') + "36366";}
        else{res = std::string(n - 2, '3') + "66";}
        std::cout << res << std::endl;
    }

}
