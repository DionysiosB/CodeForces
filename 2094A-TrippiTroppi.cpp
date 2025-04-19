#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);

    long t; std::cin >> t;
    while(t--){
        std::string a, b, c; std::cin >> a >> b >> c;
        std::cout << a[0] << b[0] << c[0] << std::endl;
    }

}
