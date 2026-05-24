#include <iostream>
#include <map>

int main(){

    const int W = 7;
    std::map<std::string, int> weekday;
    weekday["monday"] = 0;
    weekday["tuesday"] = 1;
    weekday["wednesday"] = 2;
    weekday["thursday"] = 3;
    weekday["friday"] = 4;
    weekday["saturday"] = 5;
    weekday["sunday"] = 6;

    std::string a, b; std::cin >> a >> b;
    int x = weekday[a];
    int y = weekday[b];
    int diff = y - x; if(diff < 0){diff += 7;}
    if(diff == 0 || diff == 2 || diff == 3){std::cout << "YES" << std::endl;}
    else{std::cout << "NO" << std::endl;}

    return 0;
}
