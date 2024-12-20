#include <iostream>
 
int main(){
 
    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        size_t a(0), z(0); bool fz(0);
        size_t n = s.size();
        for(size_t p = 0; p < n; p++){
            if(s[p] == '0'){++z; fz = true;}
            else if(fz){break;}
            else{++a;}
        }
        
        long shift = (a < z ? a : z);
        //Need to cover the first stretch of zeros; if the first stretch of ones
        //is longer than that, we need tro truncate
        size_t start = a + 1 - shift; start = (start < n ? start : n);
        size_t stop  = n - shift;
        std::cout << "1 " << n << " " << start << " " << stop << std::endl;
    }
    
}
