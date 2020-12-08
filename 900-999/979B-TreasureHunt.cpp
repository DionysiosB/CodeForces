#include <cstdio>
#include <iostream>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> res(3, 0);
    for(long w = 0; w < 3; w++){
        std::string s; std::cin >> s;
        std::vector<long> a(256, 0);
        for(long p = 0; p < s.size(); p++){++a[s[p]];}

        long mx(0);
        for(long p = 0; p < a.size(); p++){mx = (mx > a[p]) ? mx : a[p];}
        if(mx == s.size() && n == 1){mx = s.size() - 1;}
        else{mx += n;  mx = (mx < s.size()) ? mx : s.size();}
        res[w] = mx;
    }

    if(res[0] > res[1] && res[0] > res[2]){puts("Kuro");}
    else if(res[1] > res[0] && res[1] > res[2]){puts("Shiro");}
    else if(res[2] > res[0] && res[2] > res[1]){puts("Katie");}
    else{puts("Draw");}

    return 0;
}
