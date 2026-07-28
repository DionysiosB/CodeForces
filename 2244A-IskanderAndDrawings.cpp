#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        long len(0), cnt(0);
        for(char x : s){
            if(x == '*'){len = 0;}
            else{++len;}
            long cur = (len + 1) / 2;
            cnt = (cnt > cur ? cnt : cur);
        }

        std::cout << cnt << std::endl;
    }

}
