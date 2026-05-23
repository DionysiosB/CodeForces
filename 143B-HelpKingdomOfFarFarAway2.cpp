#include <cstdio>
#include <iostream>

int main(){

    std::string input; getline(std::cin, input);
    std::string output(".");

    size_t commaPos = input.find('.');
    size_t startInt;
    if(commaPos == std::string::npos){startInt = input.size() - 1; output += "00";}
    else{
        startInt = commaPos - 1;
        if(input.size() >= commaPos + 2){output += input[commaPos + 1];}
        if(input.size() >= commaPos + 3){output += input[commaPos + 2];}
        else{output += '0';}
    }

    for(int p = startInt; p >= 1; p--){
        output = input[p] + output;
        if((startInt - p) % 3 == 2){output = ',' + output;}
    }

    if(input[0] == '-'){
        if(output[0] == ','){output[0] = '$'; output = '(' + output;}
        else{output = "($" + output;}
        output += ')';
    }
    else{output = input[0] + output; output = '$' + output;}

    std::cout << output << std::endl;

    return 0;
}
