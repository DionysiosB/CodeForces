#include <iostream>
#include <vector>

int main(){
    
    std::string x; std::cin >> x;
    std::vector<char> digits;
    digits.push_back(x[0]);
    int exp(0);
    bool secondPart(false);
    bool allZeros(1);
    for(int p = 2; p < x.size(); p++){
        if(x[p] == 'e'){secondPart = true;}
        else if(secondPart){exp = 10 * exp + (x[p] - '0');}
        else if('0' <= x[p] && x[p] <= '9'){
            allZeros &= (x[p] == '0');
            digits.push_back(x[p]);
        }
    }
    
    if(allZeros){
        std::cout << digits[0]; 
        while(exp--){std::cout << '0';}
        return 0;
    }

    int index = 0;
    ++exp;
    if(digits[index] == '0' && exp == 1){std::cout << '0'; ++index; --exp;}
    while(index < digits.size() && exp > 0){
        if(index == 0 && digits[index] == '0'){++index; --exp; continue;}
        std::cout << digits[index];
        ++index; --exp;
    }

    if(exp > 0){while(exp--){std::cout << '0';}}
    else if(index < digits.size()){
        std::cout << "."; 
        for(int p = index; p < digits.size(); p++){std::cout << digits[p];}
    }

    return 0;
}
