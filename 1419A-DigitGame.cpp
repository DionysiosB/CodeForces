#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string num; std::cin >> num;
        long cnt(0);
        for(long p = 0; p < n; p++){
            if(num[p] % 2){--cnt;}
            else{++cnt;}
        }
        std::cout << num << "\t" << cnt << "\t";
        std::cout << (cnt >= 0 ? 1 : 2) << std::endl;
    }

    return 0;
}
