#include <iostream>

int main(){

    int n, k; std::cin >> n >> k;
    std::string s; 
    for(int p = 0; p < n; p++){s += 'a' + (p % k);}
    std::cout << s << std::endl;

    return 0;
}
