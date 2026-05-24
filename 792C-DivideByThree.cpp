#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    std::string s; std::cin >> s;

    int n(0);
    bool hasZero(false);
    for(int p = 0; p < s.size(); p++){n = 10 * n + (s[p] - '0'); n %= 3; hasZero |= (s[p] == '0');}

    if(n == 0){std::cout << s << std::endl; return 0;}
    
    long posA(-1), posB(-1); std::string tA(""), tB("");
    for(int p = s.size() - 1; p >= 0; p--){if((s[p] - '0') % 3 == n){posA = p; break;}}
    if(posA > 0){
        for(int p = 0; p < s.size(); p++){if(p == posA){continue;}; std::cout << s[p];}
        std::cout << std::endl;
        return 0;
    }
    else if(posA == 0){
        long ind(1);
        while(s[ind] == '0'){++ind;}
        for(int p = ind; p < s.size(); p++){tA += s[p];}
        if(tA.size() == 0 && hasZero){tA = "0";}
    }

    posA = posB = -1;
    int nB = 3 - n;
    for(int p = s.size() - 1; p >= 0; p--){
        if(((s[p] - '0') % 3 == nB) && (posA < 0)){posA = p;}
        else if(((s[p] - '0') % 3 == nB) && (posA > 0)){posB = p;}
        if(posA >= 0 && posB >= 0){break;}
    }

    if((tA.size() <= 0) && (posA < 0 || posB < 0 || s.size() <= 2)){std::cout << "-1" << std::endl; return 0;}

    if(posA >= 0 && posB >= 0){
        if(posB > 0){for(int p = 0; p < s.size(); p++){if(p == posA || p == posB){continue;}; tB += s[p];}}
        else{
            long ind(1);
            while(s[ind] == '0'){++ind;}
            if(ind == posA){++ind; while(s[ind] == '0'){++ind;}}
            for(int p = ind; p < s.size(); p++){if(p == posA || p == posB){continue;}; tB += s[p];}
        }

        if(tB.size() == 0 && hasZero){tB = "0";}
    }

    if(tA.size() <= 0 && tB.size() <= 0){std::cout << "-1" << std::endl;}
    else{std::cout << ((tA.size() > tB.size()) ? tA : tB) << std::endl;}

    return 0;
}
