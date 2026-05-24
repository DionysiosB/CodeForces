#include <iostream>
#include <vector>

int main(){

    long n, a, b; std::cin >> n >> a >> b;
    if(a * b < n){puts("-1"); return 0;}

    std::vector<std::vector<long> > seat(a, std::vector<long>(b, 0));

    long current(0);

    for(long row = 0; row < a; row++){
        for(long col = 0; col < b; col++){
            ++current;
            if(current > n){break;}
            else if(b % 2 == 0 && row % 2 == 1){seat[row][b - 1 - col] = current;}
            else{seat[row][col] = current;}
        }
    }

    for(long row = 0; row < a; row++){
        for(long col = 0; col < b; col++){std::cout << seat[row][col] << " ";}
        std::cout << std::endl;
    }

    return 0;
}
