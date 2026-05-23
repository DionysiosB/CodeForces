#include <cstdio>
#include <iostream>

int main(){

    const std::string evenWinner = "Daenerys";
    const std::string oddWinner = "Stannis";

    long n, k; scanf("%ld %ld\n", &n, &k);
    long odds(0), evens(0);
    for(long p = 0; p < n; p++){
        long x; scanf("%ld", &x); 
        if(x % 2){++odds;} else{++evens;}
    }

    long toBurn = n - k;
    if(toBurn <= 0){std::cout << (odds % 2 ? oddWinner : evenWinner) << std::endl;}
    else if(odds <= toBurn / 2){std::cout << evenWinner << std::endl;}
    else if(evens <= toBurn / 2){std::cout << (k % 2 ? oddWinner : evenWinner) << std::endl;}
    else{std::cout << (toBurn % 2 ? oddWinner : evenWinner) << std::endl;}

    return 0;
}
