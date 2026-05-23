#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    const int64_t MOD = 1000000007;
    const int N = 4;
    int64_t len(0); std::cin >> len;
    std::string s; std::cin >> s;
    std::vector<int64_t> v(4);
    for(int64_t p = 0; p < s.size(); p++){
        if(s[p] == 'A'){++v[0];}
        else if(s[p] == 'C'){++v[1];}
        else if(s[p] == 'G'){++v[2];}
        else if(s[p] == 'T'){++v[3];}
    }

    sort(v.rbegin(), v.rend());
    int64_t u = 1;
    for(long p = 1; p < v.size(); p++){u += (v[p] == v[0]);}

    int64_t total(1);
    for(int64_t p = 0; p < s.size(); p++){total *= u; total %= MOD;}
    std::cout << total << std::endl;

    return 0;
}
