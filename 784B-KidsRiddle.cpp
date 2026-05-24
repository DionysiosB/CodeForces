#include <iostream>

int main(){

    const int loops[] = {1,0,0,0,1,0,1,0,2,1,1,2,0,1,0,0};
    int64_t n; std::cin >> n;
    int count((n == 0) ? 1 : 0);
    while(n > 0){count += loops[n % 16]; n /= 16;}
    std::cout << count << std::endl;

    return 0;
}
