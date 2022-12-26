#include<iostream>

int main(){

    long n; std::cin >> n;
    int ans(0);
    if(n == 0){ans = 1;}
    else if(n % 4 == 1){ans = 8;}
    else if(n % 4 == 2){ans = 4;}
    else if(n % 4 == 3){ans = 2;}
    else if(n % 4 == 0){ans = 6;}

    std::cout << ans << std::endl;

    return 0;
}
