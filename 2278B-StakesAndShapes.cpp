#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);

    long t; std::cin >> t;
    while(t--){
        long x, y, z; std::cin >> x >> y >> z;
        char m('R');
        if(x >= y && x >= z){m = 'P';}
        else if(y >= x && y >= z){m = 'R';}
        else if(z >= x && z >= y){m = 'S';}

        const long n(x + y + z);
        std::string s(n, m);
        std::cout << s << std::endl;
    }

}
