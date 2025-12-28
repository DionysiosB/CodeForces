#include <iostream>
 
int main(){
    
    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        char prev('u'); s += 'u';
        int cnt(0);
        for(char &x : s){
            if(prev == 'u' && x == 'u'){x = 's'; ++cnt;}
            prev = x;
        }
        
        std::cout << cnt << std::endl;
    }
    
}
