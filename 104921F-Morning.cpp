#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        long diff(s.size());
        s = "1" + s;
        for(long p = 1; p < s.size(); p++){
            if(s[p] == '0'){s[p] = ':';} //Add 10
            long tmp = s[p] - s[p - 1];
            diff += (tmp > 0 ? tmp : -tmp);
        }

        std::cout << diff << std::endl;
    }

}
