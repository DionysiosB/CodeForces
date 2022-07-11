#include <iostream>
typedef long long ll;
 
int main(){
    
    std::string s; std::cin>> s;
    s += 'x';
    
    ll w(0), wo(0), h(0), v(0), cnt(0);
    for(ll p = 0; p < s.size(); p++){
        if(s[p] == 'v'){++v;}
        else{
            if(v > 1){cnt += (v - 1) * wo; w += (v - 1);}
            if(s[p] == 'o'){++h; wo += w;}
            v = 0;
        }
    }
    
    std::cout << cnt << std::endl;
    
    return 0;
}
