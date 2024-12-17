#include <iostream>
#include <algorithm>
 
int main(){
    
    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        std::reverse(s.begin(), s.end());
        for(size_t p = 0; p < s.size(); p++){
            if(s[p] == 'p'){s[p] = 'q';}
            else if(s[p] == 'q'){s[p] = 'p';}
        }
        
        std::cout << s << std::endl;
    }
}
