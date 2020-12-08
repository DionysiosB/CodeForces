#include <iostream>
#include <set>

int main(){
    
    long a, b, c; std::cin >> a >> b >> c;
    a %= b; 
    
    long cnt(1);
    std::set<std::pair<long, long> > s;
    while(true){
        a *= 10;
        if(a / b == c){break;}
        ++cnt; a %= b;
        
        std::pair<long, long> f = std::make_pair(a, b);
        if(s.count(f)){cnt = -1; break;}
        s.insert(f);
    }
    
    std::cout << cnt << std::endl;
    
    return 0;
}
