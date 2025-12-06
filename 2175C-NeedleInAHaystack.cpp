#include <iostream>

int main(){

    const int B = 26;
    std::ios_base::sync_with_stdio(false);
    
    long t; std::cin >> t;
    while(t--){
        std::string s, t; std::cin >> s >> t;
        
        long v[B] = {0}; for(char x : t){++v[x - 'a'];}
        
        bool possible(true);
        for(char x : s){
            --v[x - 'a'];
            if(v[x - 'a'] < 0){possible = false; break;}
        }
        if(!possible){std::cout << "Impossible" << std::endl; continue;}
        
        std::string w("");
        for(long p = 0; p < s.size(); p++){
            for(int u = 0; 'a' + u < s[p] ; u++){
                while(v[u]){w += ('a' + u); --v[u];}
            }
            w += s[p];
        }
        
        for(int u = 0; u < B ; u++){w += std::string(v[u], 'a' + u);}
        std::cout << w << std::endl;
    }
    
}
