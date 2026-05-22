#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int length; scanf("%d\n",&length);
    string input; getline(cin, input);

    int total = 0, index = 0;
    char state = input[0];

    while(++index < length){
        if(input[index] == state){++total;}
        else{state = input[index];}
    }
    printf("%d\n",total);
    return 0;
}
