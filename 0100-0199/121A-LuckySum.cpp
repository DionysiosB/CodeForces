#include <cstdio>
#include <iostream>
#include <vector>

std::vector<long long> findNext(std::vector<long long> luckyVec){

    bool done(0);
    for(int p = 0; p < luckyVec.size(); p++){
        if(luckyVec[p] == 4){luckyVec[p] = 7; done = 1; break;}
        else{luckyVec[p] = 4;}
    }
    if(!done){luckyVec.push_back(4);}

    return luckyVec;
}


long long luckyEvaluate(std::vector<long long> luckyVec){
    long long output(0);
    for(int p = luckyVec.size() - 1; p >= 0; p--){output = 10 * output + luckyVec[p];}
    return output;
}

int main(){

    std::vector<long long> luckyDigits(1,4);

    long long left, right; std::cin >> left >> right;
    long long currentNumber = left;

    while(luckyEvaluate(luckyDigits) < left){luckyDigits = findNext(luckyDigits);}
    long long total = luckyEvaluate(luckyDigits);

    while(currentNumber < right){
        long long currentLucky = luckyEvaluate(luckyDigits);
        long long dist;
        if(currentLucky < right){dist = currentLucky - currentNumber;}
        else{dist = right - currentNumber;}
        total += currentLucky * dist;
        //std::cout << "LUCKY:" << currentLucky << "\tStart:"<<currentNumber << "\tEnd:" << currentLucky << "\tSum:" << total <<  std::endl;
        currentNumber = currentLucky;
        luckyDigits = findNext(luckyDigits);
    }

    std::cout << total << std::endl;

    return 0;
}
