#include <iostream>

int main(){

    std::string line; getline(std::cin, line);
    int separator = line.find('.');
    std::string integerPart = line.substr(0,separator);
    char firstDecimal = line[separator + 1];

    if(integerPart[separator - 1] == '9'){integerPart = "GOTO Vasilisa.";}
    else if(firstDecimal >= '5'){++integerPart[separator - 1];}
    std::cout << integerPart << std::endl;
    return 0;
}
