#include <iostream>

int main(){
    
    std::ios_base::sync_with_stdio(false);
    std::string s; std::cin >> s;
    
    long ind(0), ans(0);
    while(ind < s.size()){
        long cur = ind + 1;
        while(cur < s.size() && s[cur] == '0'){++cur;}
        if((cur - ind > ind) || (cur - ind == ind && s[0] < s[ind])){ans = 1;}
        else{++ans;}
        ind = cur;
    }
    
    std::cout << ans << std::endl;
    
    return 0;
}
