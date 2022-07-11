#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);

    long n; std::cin >> n;
    long width(0), height(0);
    for(long p = 0; p < n; p++){
        char t; long x, y;
        std::cin >> t >> x >> y;
        if(t == '+'){
            long u = (x > y) ? x : y;
            long v = (x < y) ? x : y;
            width = (width > u) ? width : u;
            height = (height > v) ? height : v;
        }
        else{
            long u = (x > y) ? x : y;
            long v = (x < y) ? x : y;
            std::cout << ((width <= u && height <= v) ? "YES" : "NO") << std::endl;
        }
    }


    return 0;
}
