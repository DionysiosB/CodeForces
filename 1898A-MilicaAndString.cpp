#include <iostream>
 
int main(){
    
    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n, k; std::cin >> n >> k;
        std::string s; std::cin >> s;
        
        long b(0);
        for(long p = 0; p < s.size(); p++){if(s[p] == 'B'){++b;}}
        if(b == k){std::cout << "0" << std::endl; continue;}
        char c = (b < k ? 'A' : 'B');
        char d = (b < k ? 'B' : 'A');
        long cnt(b < k ? (k - b) : (b - k)), idx(0);
        for(long p = 0; p < s.size(); p++){
            if(s[p] == c){--cnt;}
            if(!cnt){idx = p + 1; break;}
        }
        
        std::cout << "1\n" << idx << " " << d << std::endl;
    }
}
