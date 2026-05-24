#include <iostream>

int main(){

    int n; std::cin >> n;
    std::string s; std::cin >> s;
    std::string t = s;

    int ind(n - 1);
    for(int p = n - 1; p >= 0; p -= 2){t[ind--] = s[p];}
    ind = 0;
    for(int p = n - 2; p >= 0; p -= 2){t[ind++] = s[p];}


    std::cout << t << std::endl;

    return 0;
}
