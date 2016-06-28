#include <cstdio>
#include <iostream>
#include <vector>
#include <map>
#include <string>


int main(){

    long long a; scanf("%lld\n", &a);
    const long L = 4000 * 11;
    std::string input; getline(std::cin, input);

    std::vector<long long> sum(input.size() + 1, 0);
    long long total(0);
    for(long long p = 0; p < input.size(); p++){total += (input[p] - '0'); sum[p + 1] = total;}

    std::vector<long long> counts(L, 0);
    for(long long l = 1; l <= input.size(); l++){
        for(long long r = l; r <= input.size(); r++){
            long long temp = sum[r] - sum[l - 1];
            ++counts[temp];
        }
    }

    long long output(0);
    if(a > 0){for(long p = 1; p * p <= a ; p++){
        if(p >= counts.size() || (a / p) >= counts.size()){continue;}
        if(a % p == 0){output += ((p * p == a) ? 1 : 2) * counts[p] * counts[a / p];}}
    }
    else{output = counts[0] * (input.size() * (input.size() + 1) - counts[0]);}

    std::cout << output << std::endl;

    return 0;
}
