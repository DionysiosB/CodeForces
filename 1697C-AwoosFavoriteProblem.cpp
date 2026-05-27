#include <iostream>
#include <vector>
 
int main(){
    
    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s, t; std::cin >> s >> t;
        
        std::string ss(""), tt("");
        std::vector<long> sav, scv, tav, tcv;
        for(long p = 0; p < n; p++){
            if(s[p] != 'b'){ss += s[p];}
            if(t[p] != 'b'){tt += t[p];}
            
            if(s[p] == 'a'){sav.push_back(p);}
            else if(s[p] == 'c'){scv.push_back(p);}
            
            if(t[p] == 'a'){tav.push_back(p);}
            else if(t[p] == 'c'){tcv.push_back(p);}
        }
        
        bool ans(ss == tt && sav.size() == tav.size() && scv.size() == tcv.size());
        for(long p = 0; ans && p < sav.size(); p++){if(sav[p] > tav[p]){ans = false;}}
        for(long p = 0; ans && p < scv.size(); p++){if(scv[p] < tcv[p]){ans = false;}}
        
        std::cout << (ans ? "YES" : "NO") << std::endl;
    }
 
}
