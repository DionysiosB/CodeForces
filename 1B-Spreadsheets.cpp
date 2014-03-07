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

    long N(input - 1);
    const int alphaSize(26);
    std::string output("");
    while(N > 0){
        if(N % alphaSize == 0){output += 'A';}
        else{output += ('A' + (N % alphaSize - 1));}
        N /= alphaSize;
    }
    if(input % alphaSize != 1){++output[0];}
    size_t M = output.size();
    for(int k = 0; k < M / 2; k++){char temp = output[k]; output[k] = output[M - 1 - k]; output[M - 1 - k] = temp;}
    return output;
}

int main(){
    int n; scanf("%d\n", &n);
    while(n--){
        std::string line; getline(std::cin, line);
        bool coordinates(0);
        if(line[0] == 'R'){for(int k = 1; k < line.size() - 1; k++){if(0 <= line[k - 1] && line[k - 1] <= '9' && line[k] == 'C'){coordinates = 1; break;}}}

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
