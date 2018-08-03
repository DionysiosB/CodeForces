#include <iostream>

int main(){

    const int H = 24;
    const int M = 60;
    std::string s; std::cin >> s;

    int hour = 10 * (s[0] - '0') + (s[1] - '0');
    int minute = 10 * (s[3] - '0') + (s[4] - '0');

    long dur(0);
    while(!(((hour % 10 == minute / 10)) && ((hour / 10) == (minute % 10)))){
        ++dur;
        ++minute;
        if(minute >= M){minute = 0; ++hour;}
        if(hour >= H){hour = 0;}
    }
    
    std::cout << dur << std::endl;

    return 0;
}
