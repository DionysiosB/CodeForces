#include <iostream>

int main(){

    const long long M = 1e9 + 7; 
    int n, k; std::cin >> n >> k;
    long long output = 1, c = k - 1;
    for(int p = 0; p < k - 1; p++){output = (output * k) % M;}
    for(int p = 0; p < n - k; p++){output = (output * (n - k)) % M;}
    std::cout << output << std::endl;
}
