#include <cstdio>
#include <iostream>


int main(){

    std::string input; std::cin >> input;
    int N = input.size();

    int n = 0;
    if(N >= 2){n = 10 * (input[N - 2] - '0');}
    n += input[N - 1] - '0';

    int result(0);

    if(n % 4 == 0){result =      (1 + 1 + 1 + 1) % 5;}
    else if(n % 4 == 1){result = (1 + 2 + 3 + 4) % 5;}
    else if(n % 4 == 2){result = (1 + 4 + 4 + 1) % 5;}
    else if(n % 4 == 3){result = (1 + 3 + 2 + 4) % 5;}

    printf("%d\n", result);

    return 0;
}
