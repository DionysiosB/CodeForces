#include <cstdio>
#include <iostream>

int main(){

    long n, k; std::cin >> n >> k;

    if(n * (n - 1) / 2 <= k){puts("no solution");}
    else{for(long p = 0; p < n; p++){std::cout << "0 " << p << std::endl;}}


    return 0;
}
