#include <iostream>
#include <vector>

std::vector<bool> binary(long x){
    std::vector<bool> res;
    while(x > 0){res.push_back(x % 2); x /= 2;}
    return res;
}


int main(){

    const long double m = 1.000000011;

    long n, t; std::cin >> n >> t;
    std::vector<bool> bin = binary(t);

    long double y(m), total(1.0);
    for(int p = 0; p < bin.size(); p++){
        if(bin[p]){total *= y;}
        y = y * y;
    }

    total *= n;

    std::cout.precision(15);
    std::cout << std::fixed << total << std::endl;

    return 0;
}
