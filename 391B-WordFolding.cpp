#include <cstdio>
#include <iostream>

int main(){

    const int N = 26;
    std::string word; getline(std::cin, word);

    int maxStack(0);

    for(int k = 0; k < N; k++){
        char letter = 'A' + k;

        int first(0), second(0), lastFirst(0), lastSecond(0);
        for(int t = 0; t < word.size(); t++){
            if(word[t] != letter){continue;}

            if(first == 0 && second == 0){first = 1; lastFirst = t; lastSecond = t - 1;}
            else if(t % 2 != lastFirst % 2){++first; lastFirst = t;}
            else if(t % 2 != lastSecond % 2){++second; lastSecond = t;}
            
        }

        if(maxStack < first){maxStack = first;}
        if(maxStack < second){maxStack = second;}
    }

    printf("%d\n", maxStack);

    return 0;
}
