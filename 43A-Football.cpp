#include <cstdio>
#include <iostream>

int main(){

    int n; scanf("%d\n", &n);
    std::string first(""), second(""), temp("");
    int goals[2] = {0};

    while(n--){
        getline(std::cin, temp);
        if(first == ""){first = temp;}
        else if(temp != first && second == ""){second = temp;}
        (temp == first) ? ++goals[0] : ++goals[1];
    }

    temp = (goals[0] > goals[1]) ? first : second ;
    std::cout << temp << std::endl;
    return 0;
}
