#include <cstdio>
#include <iostream>


int main(){

    long n(0); scanf("%ld\n", &n);
    std::string input; getline(std::cin, input);
    
    std::string output = input;
    for(int k = 0;k < output.size(); k++){if(output[k] == '?'){output[k] = '!';}}

    while(--n){
        getline(std::cin, input);
        for(int k = 0; k < output.size(); k++){
            if(input[k] == '?'){continue;}
            if(output[k] == '!'){output[k] = input[k];}
            else if(output[k] != '?' && input[k] != output[k]){output[k] = '?';}
        }
    }


    for(int k = 0; k < output.size(); k++){if(output[k] == '!'){output[k] = 'a';}}

    std::cout << output << std::endl;

    return 0;
}
