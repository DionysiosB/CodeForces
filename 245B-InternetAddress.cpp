#include <cstdio>
#include <iostream>

int main(){

    std::string input; getline(std::cin, input);

    int next(0);
    if(input[0] == 'f'){printf("ftp://"); next = 3;}
    else if(input[0] == 'h'){printf("http://"); next = 4;}

    while(true){
        printf("%c", input[next++]);
        if(input[next] == 'r' && input[next + 1] == 'u'){next += 2; break;}
    }
    printf(".ru");

    if(next < input.size()){printf("/");}
    while(next < input.size()){printf("%c", input[next++]);}

    return 0;
}
