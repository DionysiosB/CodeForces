#include <iostream>

//Interactive

int main(){

    std::string s("");
    while(getline(std::cin, s)) {
        if(std::cin.bad()){} // IO error
        else if(!std::cin.eof()){std::cout << "NO" << std::endl;}
        else{break;}
    }

    return 0;

}
