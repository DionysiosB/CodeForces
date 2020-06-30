#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        long cur(0), mn(0);
        for(long p = 0; p < s.size(); p++){
            cur += (s[p] == '(') - (s[p] == ')');
            mn = mn < cur ? mn : cur;
        }

        std::cout << (-mn) << std::endl;
    }

    return 0;
}
