#include <iostream>

int main(){

    int target(-1);
    std::string s; getline(std::cin, s);
    for(int p = s.size() - 1; p >= 0; p--){
        if((s[p] - '0') % 2){continue;}
        else if(target == -1 || s[p] <= s.back()){target = p;}
    }

    if(target >= 0){
        char temp = s.back(); s.back() = s[target]; s[target] = temp;
        std::cout << s << std::endl;
    }
    else{std::cout << target << std::endl;}

    return 0;
}
