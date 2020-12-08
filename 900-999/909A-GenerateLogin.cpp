#include <iostream>

int main(){

    std::string fn, ln; std::cin >> fn >> ln;
    std::string login("");
    login += fn[0];
    for(int p = 1; p < fn.size(); p++){
        if(fn[p] < ln[0]){login += fn[p];}
        else{break;}
    }
    login += ln[0];
    
    std::cout << login << std::endl;

    return 0;
}
