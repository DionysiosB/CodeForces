#include <cstdio>
#include <iostream>
#include <string>

int main(){

    int n(0), m(0); scanf("%d %d\n", &n, &m);

    int leftBoundary(1), rightBoundary(n);

    while(m--){

        std::string hint; getline(std::cin, hint);

        int currentBox(0),index(hint.size() - 1);

        while(hint[index] != ' '){--index;}
        while(++index < hint.size()){currentBox = 10 * currentBox + (hint[index] - '0');}

        if(hint.find("left") != std::string::npos && rightBoundary > currentBox - 1){rightBoundary = currentBox - 1;}
        else if(hint.find("right") != std::string::npos && leftBoundary < currentBox + 1){leftBoundary = currentBox + 1;}
    }

    if(rightBoundary < leftBoundary){puts("-1");}
    else{std::cout << rightBoundary - leftBoundary + 1 << std::endl;}

    return 0;
}
