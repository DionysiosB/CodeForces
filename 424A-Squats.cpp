#include <cstdio>
#include <iostream>

int main(){

    int n(0); scanf("%d\n", &n);
    std::string input(""); getline(std::cin, input);

    int up(0), down(0);
    for(int k = 0; k < n; k++){input[k] == 'X' ? (++up) : (++down);}

    char source = 'x', target = 'X'; int diff = n/2 - up;
    if(up > down){diff = up - n / 2; source = 'X'; target = 'x';}

    std::cout << diff << std::endl;
    for(int k = 0; k < input.size(); k++){
        if(diff > 0 && input[k] == source){printf("%c", target); --diff;}
        else{printf("%c", input[k]);}
    }

    return 0;
}
