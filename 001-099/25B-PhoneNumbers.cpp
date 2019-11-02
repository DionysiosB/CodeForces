#include <cstdio>
#include <iostream>
#include <string>

int main(){

    int n(0); scanf("%d\n", &n);
    std::string number; getline(std::cin, number);
    if(number.size() <= 3){std::cout << number << std::endl;}
    else{
        int index(0);

        if(number.size() % 2){std::cout << number.substr(0,3); index = 3;}
        else{std::cout << number.substr(0,2); index = 2;}

        while(index < number.size()){
            std::cout << "-";
            std::cout << number.substr(index, 2);
            index += 2;
        }
        std::cout << std::endl;
    }
    return 0;
}
