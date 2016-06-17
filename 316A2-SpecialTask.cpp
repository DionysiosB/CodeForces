#include <cstdio>
#include <iostream>
#include <string>
#include <set>


int main(){

    std::string code; getline(std::cin, code);

    std::set<char> letters;
    long long output(1), numZeros(0);

    if(code[0] == '?'){output = 9;}
    else if('A' <= code[0] && code[0] <= 'J'){output = 9; letters.insert(code[0]);}

    for(long p = 1; p < code.size(); p++){
        if('0' <= code[p] && code[p] <= '9'){continue;}
        else if(code[p] == '?'){++numZeros;}
        else if('A' <= code[p] && code[p] <= 'J' && letters.count(code[p]) == 0){output *= (10 - letters.size()); letters.insert(code[p]);}
    }

    printf("%lld", output); for(int p = 0; p < numZeros; p++){printf("0");}; puts("");

    return 0;
}
