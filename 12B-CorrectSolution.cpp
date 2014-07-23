#include <cstdio>
#include <iostream>
#include <string>

int main(){

    std::string input(""), answer(""), output("");
    getline(std::cin, input);
    getline(std::cin, answer);

    int count[10] = {0};
    char minNonZero('A');
    for(int k = 0; k < input.size(); k++){
        ++count[input[k] - '0'];
        if(input[k] > '0' && input[k] < minNonZero){minNonZero = input[k];}
    }

    if(minNonZero == 'A'){output = "0";}
    else{
        --count[minNonZero - '0'];
        output += minNonZero;
        for(int digit = 0; digit < 10; digit++){while(count[digit]--){output += ('0' + digit);}}
    }

    if(answer == output){puts("OK");}
    else{puts("WRONG_ANSWER");}

    return 0;
}
