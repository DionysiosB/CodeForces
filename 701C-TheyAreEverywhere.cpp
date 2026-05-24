#include <iostream>
#include <vector>

int main(){

    const int N = 256;
    std::ios_base::sync_with_stdio(false);
    long n; std::cin >> n;
    std::string s; std::cin >> s;

    std::vector<long> v(N, 0);
    long num(0);
    for(long p = 0; p < n; p++){if(v[s[p]] == 0){++num;}; ++v[s[p]];}
    
    std::vector<long> w(N, 0);
    long l(0), total(0), length(n);

    for(long r = 0; r < n; r++){
        if(w[s[r]] == 0){++total;}
        ++w[s[r]];
        while(w[s[l]] > 1){--w[s[l]]; ++l;}
        if(total >= num){
            long temp = r - l + 1;
            length = (length < temp) ? length : temp;
        }
    }
    
    std::cout << length << std::endl;

    return 0;
}
