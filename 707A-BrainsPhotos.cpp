#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long n, m; std::cin >> n >> m;
    bool color(false);
    for(int row = 0; row < n; row++){
        if(color){break;}
        for(int col = 0; col < m; col++){
            char x; std::cin >> x;
            if(x == 'C' || x == 'M' || x == 'Y'){color = true; break;}
        }
    }

    std::cout << (color ? "#Color" : "#Black&White") << std::endl;

    return 0;
}
