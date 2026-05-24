#include <iostream>

int main(){

    
    int64_t a, b; std::cin >> a >> b;
    int64_t d(1);
    for(int64_t p = a + 1; p <= b; p++){
        d *= (p % 10); d %= 10;
        if(d == 0){break;}
    }
    std::cout << d << std::endl;

    return 0;
}
