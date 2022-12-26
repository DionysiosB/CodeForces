#include <iostream>

int main(){

    long n, m; std::cin >> n >> m;
    long a(2 * n), b(3 * m);
    for(int p = 6; p <= a && p <= b ; p += 6){
        if(a <= b){a += 2;} else{b += 3;}
    }

    std::cout << ((a > b) ? a : b) << std::endl;

    return 0;
}
