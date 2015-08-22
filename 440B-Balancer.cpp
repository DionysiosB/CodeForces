#include <cstdio>
#include <iostream>
#include <vector>

int main(){

    long long n; std::cin >> n;
    std::vector<long long> matchVec(n, 0);


    long long total(0);
    for(long p = 0; p < n; p++){std::cin >> matchVec[p]; total += matchVec[p];}

    long long number = total / n;
    long long moves(0);

    for(long long p = 0; p < n - 1; p++){
        long long temp = number - matchVec[p];
        matchVec[p + 1] -= temp;
        if(temp < 0){temp = - temp;}
        moves += temp;
    }

    std::cout << moves << std::endl;

    return 0;
}
