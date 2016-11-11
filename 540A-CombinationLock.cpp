#include <cstdio>
#include <iostream>

int main(){

    const int N = 10;
    int digits; scanf("%d\n", &digits);
    std::string initial; getline(std::cin, initial);
    std::string final; getline(std::cin, final);

    int moves(0);
    for(int p = 0; p < digits; p++){
        int diff = initial[p] - final[p];
        if(diff < 0){diff = -diff;}
        if(diff > N / 2){diff = N - diff;}
        moves += diff;
    }

    printf("%d\n", moves);

    return 0;
}
