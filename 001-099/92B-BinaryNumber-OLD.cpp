#include <cstdio>
#include <iostream>
#include <string>

std::string transform(std::string input){

    if(input.size() <= 1 || input == "1"){return "1";}
    else if(input[input.size() - 1] == '0'){return input.substr(0,input.size() - 1);}
    else if(input[input.size() - 1] == '1'){
        bool done(0);
        for(int k = input.size() - 1; k >= 0; k--){
            if(input[k] == '1'){input[k] = '0';}
            else if(input[k] == '0'){input[k] = '1'; done = 1; break;}
        }
        if(!done){input = '1' + input;}
        return input;
    }
    return "ERROR";
}


int main(){

    long counter(0);
    std::string currentString("1");
    getline(std::cin, currentString);
    while(currentString != "1"){currentString = transform(currentString); ++counter;}
    std::cout << counter << std::endl;

    return 0;
}
