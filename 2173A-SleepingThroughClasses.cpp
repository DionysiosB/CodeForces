#include <iostream>
 
int main(){
 
    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
       long n, k; std::cin >> n >> k;
       std::string s; std::cin >> s;
       long idx(-1), cnt(0);
       for(long p = 0; p < s.size(); p++){
           if(s[p] == '1'){idx = p + k;}
           else{cnt += (idx < p);}
       }
       
       std::cout << cnt << std::endl;
    }
    
}
