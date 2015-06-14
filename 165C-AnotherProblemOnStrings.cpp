#include <cstdio>
#include <iostream>
#include <vector>

int main(void){

    long long k; std::string input; std::cin >> k >> input;
    long long n = input.size();
    std::vector<long long> posCount(n + 1,0); posCount[0] = 1;

    long long onesSoFar = 0,output = 0;
    for(long long p = 0; p < n; p++){
        if(input[p] == '1'){++onesSoFar;}
        if(onesSoFar >= k){output += posCount[onesSoFar-k];}
        ++posCount[onesSoFar];
    }

    std::cout << output << std::endl;
    return 0;
}
