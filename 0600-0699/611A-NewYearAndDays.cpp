#include <iostream>

int main(){

    const int YEAR = 2016;

    int num; std::string of, interval;
    std::cin >> num >> of >> interval;
    if(interval == "month"){
        if(num <= 29){std::cout << 12 << std::endl;}
        else if(num ==  30){std::cout << 11 << std::endl;}
        else if(num == 31){std::cout << 7 << std::endl;}
    }

    if(interval == "week"){
        if(num == 5 || num == 6){std::cout << 53 << std::endl;}
        else{std::cout << 52 << std::endl;}
    }

    return 0;
}
