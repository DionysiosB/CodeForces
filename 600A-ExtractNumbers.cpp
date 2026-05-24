#include <iostream>
#include <string>
#include <vector>

bool isInt(std::string x){

    if(x.size() <= 0 || (x[0] == '0' && x.size() > 1)){return false;}
    for(size_t p = 0; p < x.size(); p++){if(x[p] < '0' || x[p] > '9'){return false;}}
    return true;
}

int main(){

    std::string s; getline(std::cin, s);
    const std::string DELIM = ",;";

    std::vector<std::string> integers;
    std::vector<std::string> nonint;

    size_t prev(0), pos(0);
    while((pos = s.find_first_of(DELIM, prev)) != std::string::npos){
        std::string current = s.substr(prev, pos - prev);
        if(isInt(current)){integers.push_back(current);}
        else{nonint.push_back(current);}
        prev = pos + 1;
    }

    if(prev <= s.size()){
        std::string current = s.substr(prev, s.size() - prev);
        if(isInt(current)){integers.push_back(current);}
        else{nonint.push_back(current);}
    }

    if(integers.size() > 0){
        std::cout<< "\"";
        for(size_t p = 0; p < integers.size() - 1; p++){std::cout << integers[p] << ",";}
        std::cout << integers.back() << "\"" << std::endl;
    }
    else{std::cout << "-" << std::endl;}

    if(nonint.size() > 0){
        std::cout<< "\"";
        for(size_t p = 0; p < nonint.size() - 1; p++){std::cout << nonint[p] << ",";}
        std::cout << nonint.back() << "\"" << std::endl;
    }
    else{std::cout << "-" << std::endl;}

    return 0;
}
