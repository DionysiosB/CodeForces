#include <iostream>
#include <string>

int main(){

    std::string input; getline(std::cin, input);
    std::string buffer(""), output("");

    output += input[0];
    long total(1);

    if(input.size() >= 2){output += input[1]; ++total;}

    for(long k = 2; k < input.size(); k++){

        if(input[k - 1] == input[k] && input[k - 2] == input[k]){continue;}
        else if(input[k - 1] == input[k] && output[total - 3] == output[total - 2]){continue;}
        
        output += input[k];
        ++total;
    }

    std::cout << output << std::endl;
    return 0;
}
