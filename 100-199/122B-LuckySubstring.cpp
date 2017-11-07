#include <cstdio>
#include <iostream>

int main(){

    std::string input; getline(std::cin, input);
    int fours(0), sevens(0);
    for(int k = 0; k < input.size(); k++){
        if(input[k] == '4'){++fours;}
        else if(input[k] == '7'){++sevens;}
    }
    if(fours == 0 && sevens == 0){puts("-1");}
    else if (fours >= sevens){puts("4");}
    else{puts("7");}

    return 0;
}
