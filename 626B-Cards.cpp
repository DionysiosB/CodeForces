#include <iostream>

int main(){

    int n; std::string s;
    std::cin >> n >> s;

    int b(0), g(0), r(0);
    for(int p = 0; p < n; p++){
        if(s[p] == 'B'){++b;}
        else if(s[p] == 'G'){++g;}
        else if(s[p] == 'R'){++r;}
    }

    if((g && r) || (!g && !r) || (g >= 2 && b) || (r >= 2 && b)){std::cout << 'B';}
    if((b && r) || (!b && !r) || (b >= 2 && g) || (r >= 2 && g)){std::cout << 'G';}
    if((b && g) || (!b && !g) || (b >= 2 && r) || (g >= 2 && r)){std::cout << 'R';}
    std::cout << std::endl;

    return 0;
}
