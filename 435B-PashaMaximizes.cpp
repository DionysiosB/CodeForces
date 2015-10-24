#include <cstdio>
#include <iostream>
#include <vector>

int main(){

    int64_t number, k; std::cin >> number >> k;
    std::vector<int> numVec;
    while(number > 0){
        int digit = number % 10;
        numVec.push_back(digit);
        number /= 10;
    }

    for(int p = numVec.size() - 1; p >= 0; p--){
        if(k <= 0){break;}
        int maxDigit = numVec[p];
        int maxPos = p;
        for(int q = p - 1; q >= 0 && q >= p - k; q--){
            if(numVec[q] > maxDigit){
                maxDigit = numVec[q];
                maxPos = q;
            }
        }

        if(maxPos < p){
            for(int q = maxPos; q < p; q++){numVec[q] = numVec[q + 1];}
            numVec[p] = maxDigit;
        }
         
        k -= (p - maxPos);
    }

    for(int p = numVec.size() - 1; p >= 0; p--){std::cout << numVec[p];}
    puts("");


    return 0;
}
