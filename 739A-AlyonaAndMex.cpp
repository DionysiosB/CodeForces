#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long n, m; std::cin >> n >> m;
    long len(n + 1);
    while(m--){
        long a, b; std::cin >> a >> b;
        long temp = b - a + 1;
        len = (len < temp) ? len : temp;
    }

    std::cout << len << std::endl;
    for(int p = 0; p < n; p++){std::cout << (p % len) << " ";}
    std::cout << std::endl;

    return 0;
}
