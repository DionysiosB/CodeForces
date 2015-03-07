#include<cstdio>
#include<iostream>
#include<string>

int main(){

    std::string input; getline(std::cin, input);

    int plusPos  = input.find("+");
    int equalPos = input.find("=");

    int A = plusPos;
    int B = equalPos - plusPos - 1;
    int C = input.size() - equalPos - 1;

    if(C == A + B){
        std::cout << input << std::endl;
    }
    else if(C == A + B + 2){
        printf("|"); for(int k = 0; k < input.size() - 1; k++){printf("%c", input[k]);}
    }
    else if(C + 2 == A + B){
        int moveStick = plusPos - 1; 
        if(moveStick == 0){moveStick = 2;}
        for(int k = 0; k < input.size() ; k++){if(k != moveStick){printf("%c", input[k]);}}
        puts("|");

    }
    else{puts("Impossible");}

    return 0;
}
