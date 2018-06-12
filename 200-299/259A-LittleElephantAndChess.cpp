#include <cstdio>
#include <iostream>

int main(){
    int numRows = 8;
    bool possible(1); std::string line("");
    while(numRows--){
        getline(std::cin, line);
        if(line != "WBWBWBWB" && line !="BWBWBWBW"){possible = 0; break;}
    }
    possible ? puts("YES") : puts("NO");
    return 0;
}
