#include <iostream>
 
int main() {
    
    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string a, b; std::cin >> a >> b;
        long odds(0), evens(0);
        for(int p = 0; p < n; p++){
            if(p % 2){odds += (a[p] == '1') - (b[p] == '1');}
            else{evens += (a[p] == '1') - (b[p] == '1');}
        }
        
        std::cout << (odds || evens ? "NO" : "YES") << std::endl;
    }
 
}
