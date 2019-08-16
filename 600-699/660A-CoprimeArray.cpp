#include <iostream>
#include <vector>

long gcd (long a, long b){return (b == 0) ? a : gcd (b, a%b);}

int main(){

    int n; std::cin >> n;
    long prev(1);
    std::vector<long> v;
    for(int p = 0; p < n; p++){
        long x; std::cin >> x;
        if(gcd(x, prev) > 1){v.push_back(1);}
        v.push_back(x);
        prev = x;
    }

    std::cout << (v.size() - n) << std::endl;
    for(int p = 0; p < v.size(); p++){std::cout << v[p] << " ";}
    std::cout << std::endl;

    return 0;
}
