#include <iostream>

int main(){

    std::string name; getline(std::cin, name);
    std::string target; getline(std::cin, target);

    long x = 0;
    long left(target.size());
    for(long p = 0; p < target.size(); p++){
        if(name[x] == target[p]){++x;}
        if(x >= name.size()){left = p; break;}
    }

    x = name.size() - 1;
    long right(-1);
    for(long p = target.size() - 1; p >= 0; p--){
        if(name[x] == target[p]){--x;}
        if(x < 0){right = p; break;}
    }

    std::cout << ((left < right) ? (right - left) : 0) << std::endl;

    return 0;
}
