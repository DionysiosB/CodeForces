#include <iostream>
#include <vector>
#include <algorithm>
 
int main(){
 
    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        std::string w(s);
        sort(w.begin(), w.end());
        
        std::vector<long> v;
        for(int p = 0; p < n; p++){
            if(s[p] == w[p]){continue;}
            v.push_back(p + 1);
        }
        
        if(v.empty()){std::cout << "Bob" << std::endl;}
        else{
            std::cout << "Alice" << std::endl << v.size() << std::endl;
            for(int x : v){std::cout << x << " ";}
            std::cout << std::endl;
        }
    }
    
}
