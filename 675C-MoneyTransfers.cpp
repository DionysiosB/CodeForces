#include <iostream>
#include <algorithm>
#include <map>

int main(){
    
    std::ios_base::sync_with_stdio(false);
    int64_t n; std::cin >> n;
    std::map<int64_t, int64_t> m;
    int64_t cumTotal(0);
    for(int64_t p = 0; p < n; p++){
        int64_t x; std::cin >> x; 
        cumTotal += x;
        if(m.count(cumTotal) > 0){++m[cumTotal];}
        else{m[cumTotal] = 1;}
    }
    
    int64_t maxComponents = 0;
    for(std::map<int64_t, int64_t>::iterator it = m.begin(); it != m.end(); it++){
        maxComponents = (maxComponents > (it->second) ? maxComponents : (it->second));
    }
    
    std::cout << (n - maxComponents) << std::endl;
    
    return 0;
}
