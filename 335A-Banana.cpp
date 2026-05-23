#include <iostream>
#include <vector>

int main(){

    const long N = 26;
    std::string s; std::cin >> s;
    std::vector<long> a(N, 0);
    long unique(0);
    for(long p = 0; p < s.size(); p++){
        if(!a[s[p] - 'a']){++unique;}
        ++a[s[p] - 'a'];
    }

    long n; std::cin >> n;
    if(n < unique){puts("-1"); return 0;}

    std::string sheet; long num(0);
    for(long u = 1; u <= s.size(); u++){
        if(num > 0){break;}
        std::string cand("");
        for(long p = 0; p < a.size(); p++){
            long rep = a[p] / u + ((a[p] % u) > 0);
            while(rep--){cand += ('a' + p);}
        }
        if(cand.size() <= n){num = u; sheet = cand; break;}
    }

    while(sheet.size() < n){sheet += 'a';}
    std::cout << num << std::endl << sheet << std::endl;

    return 0;
}
