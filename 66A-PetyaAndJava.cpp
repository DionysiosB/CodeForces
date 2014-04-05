#include <cstdio>
#include <iostream>
#include <string>


int main(){

    std::string input; getline(std::cin, input);

    if(input[0] != '-' && (input.size() < 3 || (input.size() == 3 && input.compare("127")  <= 0)) ){puts("byte");}
    else if(input[0] == '-' && (input.size() < 4 || (input.size() == 4 && input.compare("-128") <= 0)) ){puts("byte");}

    else if(input[0] != '-' && (input.size() < 5 || (input.size() == 5 && input.compare("32767") <= 0)) ){puts("short");}
    else if(input[0] == '-' && (input.size() < 6 || (input.size() == 6 && input.compare("-32768") <= 0)) ){puts("short");}

    else if(input[0] != '-' && (input.size() < 10 || (input.size() == 10 && input.compare("2147483647") <= 0)) ){puts("int");}
    else if(input[0] == '-' && (input.size() < 11 || (input.size() == 11 && input.compare("-2147483648") <= 0)) ){puts("int");}

    else if(input[0] != '-' && (input.size() < 19 || (input.size() == 19 && input.compare("9223372036854775807") <= 0)) ){puts("long");}
    else if(input[0] == '-' && (input.size() < 20 || (input.size() == 20 && input.compare("-9223372036854775808") <= 0)) ){puts("long");}

    else{puts("BigInteger");}

    return 0;
}
