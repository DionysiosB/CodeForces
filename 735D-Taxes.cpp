#include <iostream>

long isPrime(long x){

    if(x <= 1){return false;}
    for(int p = 2; p * p <= x; p++){if(x % p == 0){return false;}}
    return true;
}

int main(){

    long n; std::cin >> n;
    long ans(0);
    if(isPrime(n)){ans = 1;}
    else if(n % 2 == 0){ans = 2;}
    else if((n % 2) && isPrime(n - 2)){ans = 2;}
    else if((n % 2) && !isPrime(n - 2)){ans = 3;}

    std::cout << ans << std::endl;

    return 0;
}
