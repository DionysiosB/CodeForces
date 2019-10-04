#include <iostream>
 
int main(){
    
    std::ios_base::sync_with_stdio(false);
    long k, a, b; std::cin >> k >> a >> b;
    std::string s; std::cin >> s;
    if(s.size() < k * a || s.size() > k * b){std::cout << "No solution" << std::endl; return 0;}
    long avg = s.size() / k;
    long add = s.size() % k;
    long cnt(0);
    for(long p = 0; p < s.size(); p++){
        std::cout << s[p]; ++cnt;
        if(cnt >= avg + (add > 0)){std::cout << std::endl; cnt = 0; --add;}
    }
    
    return 0;
}
