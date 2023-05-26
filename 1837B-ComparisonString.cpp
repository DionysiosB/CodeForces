#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        long cnt(1), cur(1);
        for(long p = 1; p < s.size(); p++){
            if(s[p] == s[p - 1]){++cur;}
            else{cur = 1;}
            cnt = (cnt > cur) ? cnt : cur;
        }

        printf("%ld\n", cnt + 1);
    }

}
