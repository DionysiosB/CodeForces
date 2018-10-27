#include <iostream>
#include <vector>

int main(){

    const long G = 7;
    long n; std::cin >> n;
    std::vector<std::string> a(n);
    for(long p = 0; p < n; p++){std::cin >> a[p];}
    long m(0);
    for(long col = 0; col < G; col++){
        long count(0);
        for(long row = 0; row < n; row++){count += a[row][col] - '0';}
        m = (m > count) ? m : count;
    }
    
    std::cout << m << std::endl;

    return 0;
}
