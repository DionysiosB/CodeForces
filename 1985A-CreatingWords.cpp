#include<iostream>

int main(){

    std::ios_base::sync_with_stdio(false);

    long t; std::cin >> t;
    while(t--){
        std::string x,y; std::cin >> x >> y;
        char c = x[0]; x[0] = y[0]; y[0] = c;
        std::cout << x << " " << y << std::endl;
    }

}
