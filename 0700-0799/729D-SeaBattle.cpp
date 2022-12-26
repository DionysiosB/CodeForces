#include <iostream>
#include <vector>

int main(){
    
    std::ios_base::sync_with_stdio(false);
    long n, a, b, k; std::cin >> n >> a >> b >> k;
    std::string s; std::cin >> s;

    long counter(0);
    std::vector<long> v;
    for(long p = 0; p < n; p++){
        if(s[p] == '1'){counter = 0;}
        else{
            ++counter;
            if(counter >= b){counter = 0; v.push_back(p);}
        }
    }

    long needed = v.size() - a + 1;
    std::cout << needed << std::endl;
    for(long p = 0; p < needed; p++){std::cout << (v[p] + 1) << " ";}
    std::cout << std::endl;

    return 0;
}
