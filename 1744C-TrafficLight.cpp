#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    
    long t; std::cin >> t;
    while(t--){
        long n; char c; std::cin >> n >> c;
        std::string s; std::cin >> s;
        if(c == 'g'){std::cout << "0" << std::endl;  continue;}

        long nxt(0); for(long p = 0; (!nxt) && p < s.size(); p++){if(s[p] == 'g'){nxt = n + p; break;}}
        long res(0);
        for(long p = n - 1; p >= 0; p--){
            if(s[p] == 'g'){nxt = p;}
            else if(s[p] == c){
                long cur = nxt - p;
                res = (res > cur) ? res : cur;
            }
        }

        std::cout << res << std::endl;

    }

}
