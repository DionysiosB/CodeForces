#include <iostream>

int main(){

    long n; std::cin >> n;
    long sum(0), nonzero(0);
    for(long p = 0; p < n; p++){
        long x; std::cin >> x;
        sum += x;
        if(!nonzero && x != 0){nonzero = p + 1;}
    }

    if(nonzero == 0){std::cout << "NO" << std::endl;}
    else{
        std::cout << "YES" << std::endl;
        if(sum != 0){std::cout << "1\n1 " << n << std::endl;}
        else{
            std::cout << "2\n1 " << nonzero << std::endl;
            std::cout << (nonzero + 1) << " " << n << std::endl;
        }
    }

    return 0;
}
