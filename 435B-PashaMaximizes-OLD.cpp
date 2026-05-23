#include <cstdio>
#include <iostream>

int main(){

    std::string number; int k; std::cin >> number >> k;
    //std::cout << number << std::endl << k << std::endl;

    int index = 0;
    while(k){
        if(number[index] < number[index + 1]){
            char temp = number[index];
            number[index] = number[index + 1];
            number[index + 1] = temp;
            --k;
            --index; if(index < 0){index = 0;}
        }
        else{++index;}
        if(index >= number.size() - 1){break;}
    }

    std::cout << number << std::endl;

    return 0;
}
