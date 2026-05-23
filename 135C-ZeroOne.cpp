#include <iostream>

int main(){

    std::string s; getline(std::cin, s);
    long zeros(0), ones(0), qs(0);
    for(long p = 0; p < s.size(); p++){
        if(s[p] == '0'){++zeros;}
        else if(s[p] == '1'){++ones;}
        else if(s[p] == '?'){++qs;}
    }

    char last = s[s.size() - 1];
    long minDiff = ones - (zeros + qs);
    long maxDiff = (ones + qs) - zeros;
    
    if(minDiff < 0){puts("00");}
    if((last == '1' && minDiff <= 1 && 0 <= maxDiff) || (last == '?' && minDiff <= -1 && 0 <= maxDiff)){puts("01");}
    if((last == '0' && minDiff <= 1 && 0 <= maxDiff) || (last == '?' && minDiff <= 1 && 2 <= maxDiff)){puts("10");}
    if(maxDiff > 1){puts("11");}

    return 0;
}
