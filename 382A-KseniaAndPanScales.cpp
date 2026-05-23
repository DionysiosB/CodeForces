#include <cstdio>
#include <iostream>
#include <string>


int main(){

    std::string current(""); getline(std::cin, current);
    std::string remaining(""); getline(std::cin, remaining);

    int left = current.find("|");
    int right = current.size() - 1 - left;

    int diff = left - right; if(diff < 0){diff *= -1;}
    
    if(diff > remaining.size() || (remaining.size() - diff)% 2 != 0){puts("Impossible");}
    else{

        int remLeft = (remaining.size() - diff) / 2;
        if(left < right){remLeft += diff;}

        for(int k = 0; k < left; k++){printf("%c", current[k]);}
        for(int k = 0; k < remLeft; k++){printf("%c", remaining[k]);}
        printf("|");
        for(int k = left + 1; k < current.size(); k++){printf("%c", current[k]);}
        for(int k = remLeft; k < remaining.size(); k++){printf("%c", remaining[k]);}
    }

    return 0;
}
