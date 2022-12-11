#include <cstdio>
#include <iostream>

int convertToAge(std::string str){

    int output(0);
    for(int k = 0; k < str.size(); k++){output = 10 * output + (str[k] - '0');}
    return output;
}

bool isAlcoholicDrink(std::string drink){
    return (drink == "ABSINTH" || drink == "BEER" || drink == "BRANDY" || drink == "CHAMPAGNE" || drink == "GIN" || drink == "RUM" || drink == "SAKE" || drink == "TEQUILA" || drink == "VODKA" || drink == "WHISKEY" || drink == "WINE");
}


int main(){

    int n(0); scanf("%d\n", &n);
    std::string input("");

    long total(0);
    for(int k = 0; k < n; k++){
        getline(std::cin, input);
        if(input[0] >= '0' && input[0] <= '9'){if(convertToAge(input) < 18){++total;}}
        else if(isAlcoholicDrink(input)){++total;}
    }

    printf("%ld\n", total);
    return 0;
}
