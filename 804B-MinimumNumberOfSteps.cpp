#include <iostream>

int main(){

    const int64_t MOD = 1000000007;

    std::string s; std::cin >> s;
    int64_t count(0), total(0);
    for(int64_t p = s.size() - 1; p >= 0; p--){
        if(s[p] == 'b'){count++; count %= MOD;}
        else{total += count; total %= MOD; count *= 2;}
    }

    std::cout << total << std::endl;

    return 0;
}
