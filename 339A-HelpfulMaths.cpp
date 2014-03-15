#include <cstdio>
#include <iostream>

int main(){

    std::string input; getline(std::cin, input);
    int count[4] = {0};
    for(int k = 0; k < input.size(); k++){if('1' <= input[k] && input[k] <= '3'){++count[input[k] - '0'];}}

    bool started(0);
    for(int k = 1; k <= 3; k++){
        for(int m = 0; m < count[k]; m++){
            if(started){printf("+");} else{started = 1;};
            printf("%d",k);
        } 
    }
    printf("\n");
    return 0;
}
