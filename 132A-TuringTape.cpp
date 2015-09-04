#include <cstdio>
#include <iostream>


int reverseChar(char input){

    const int N = 8;
    int output(0);
    for(int p = 0; p < N; p++){output = 2 * output + (input % 2);input /= 2;}
    return output;
}

int main(){

    const int N = 256;
    std::string line; getline(std::cin, line);

    int previous = 0;
    for(int p = 0; p < line.size(); p++){
        int current = reverseChar(line[p]);
        printf("%d\n", (N + previous - current) % N);
        previous = current;
    }

    return 0;
}
