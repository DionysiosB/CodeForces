#include <iostream>

int main(){
    
    long n, m; std::cin >> n >> m;
    std::string s; std::cin >> s;
    while(m--){
        long l, r; char c1, c2; std::cin >> l >> r >> c1 >> c2;
        for(long p = l - 1; p < r; p++){s[p] = (s[p] == c1) ? c2 : s[p];}
    }
    
    std::cout << s << std::endl;
    
    return 0;
}
