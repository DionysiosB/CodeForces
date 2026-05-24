#include <iostream>

int main(){

    int64_t s, x; std::cin >> s >> x;
    int64_t d = (s - x) / 2;
    if((d < 0) || ((s & 1) != (x & 1)) || (d & x) != 0){std::cout << 0 << std::endl; return 0;}
    int count(0);
    while(x){count += x % 2; x /= 2;}
    int64_t total = 1LL << count ;
    if(d == 0){total -= 2;}
    std::cout << total << std::endl;

    return 0;
}
