#include <iostream>

bool isBeautiful(std::string x){

    if(x.size() < 1 || x[0] != '1'){return false;}
    for(int p = 1; p < x.size(); p++){if(x[p] != '0'){return false;}}
    return true;
}

int main(){

    int n; std::cin >> n;
    std::string ans("1");

    int zero(0);
    int tail(0);
    while(n--){
        std::string current; std::cin >> current;
        if(current[0] == '0' && current.size() == 1){zero = 1; break;}
        if(isBeautiful(current)){tail += current.size() - 1;}
        else{ans = current;}
    }

    if(zero){std::cout << "0" << std::endl; return 0;}

    for(int p = 0; p < tail; p++){ans += '0';}
    std::cout << ans << std::endl;

    return 0;
}
