#include <cstdio>
#include <iostream>
#include <vector>

int main(){

    int w, h; scanf("%d %d\n", &w, &h);
    std::vector<std::string> s(h);
    for(int p = 0; p < h; p++){getline(std::cin, s[p]);}
    for(int p = 0; p < 2 * w; p++){
        for(int q = 0; q < 2 * h; q++){std::cout << s[q/2][p/2];}
        std::cout << std::endl;
    }

    return 0;
}
