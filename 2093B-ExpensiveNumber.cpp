#include <iostream>
 
int main(){
 
    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        long cz(0), z(0);
        for(long p = 0; p < s.size(); p++){
            if(s[p] == '0'){++z;}
            else{cz += z;z = 0;}
        }
        
        long ans = s.size() - cz - 1;
        std::cout << ans << std::endl;
    }
 
}
