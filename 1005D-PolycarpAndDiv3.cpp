#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    std::string s; std::cin >> s;
    long cnt(0), cma(0), cmb(0);
    for(long p = 0; p < s.size(); p++){
        long u = (s[p] - '0') % 3;
        if(u % 3 == 0){cma = 0; cmb = 0; ++cnt;}
        else{
            cma += (u == 1);
            cmb += (u == 2);
            if(cmb >= 3){cmb = 0; ++cnt;}
            else if(cma >= 1 && cmb >= 1){--cma; --cmb; ++cnt;}
            else if(cma >= 3){cma -= 3; ++cnt;}
        }
    }

    printf("%ld\n", cnt);

    return 0;
}
