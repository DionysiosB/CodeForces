#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cctype>
#include <vector>
#include <string>


long convertToNumeric(std::string input){

    long output(0);
    const int alphaSize(26);
    for(int k = 0; k < input.size(); k++){output = alphaSize * output + (input[k] - 'A' + 1);}
    return output;
}


std::string convertToAlpha(long input){

    const int alphaSize(26);
    std::string output("");

    while(input > 0){
        char letter = 'Z';
        long inputMod = input % alphaSize;
        if(inputMod > 0){letter = 'A' + inputMod - 1;}
        else{input -= alphaSize;}
        input = input / alphaSize;
        output = letter + output;
    }

    return output;
}

int main(){
    int n; scanf("%d\n", &n);
    while(n--){
        std::string line; getline(std::cin, line);

        bool coordinates(0);
        if(line[0] == 'R' && ('0' <= line[1] && line[1] <= '9') && 1 < line.find('C') && line.find('C') < line.size() - 1){coordinates = 1;}

        if(coordinates){
            int cPos = line.find('C');
            std::string rowString = line.substr(1, cPos - 1);  
            std::string colString = line.substr(cPos + 1);  
            long col = atol(colString.c_str());
            std::cout <<  convertToAlpha(col) << rowString << std::endl;
        }
        else{
            
            std::string rowString = "";
            std::string colString = "";

            for(int k = 0; k < line.size(); k++){
                if('0' <= line[k] && line[k] <= '9'){colString = line.substr(k);break;}
                else{rowString += line[k];}
            }
            std::cout << "R" << colString << "C" <<  convertToNumeric(rowString) << std::endl;
        }
    }

    return 0;
}
