#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    std::string a; getline(std::cin, a);
    std::string b; getline(std::cin, b);

    long x(0);
    while(a[x] == '0'){++x;}

    long y(0);
    while(b[y] == '0'){++y;}

    if(a.size() + y < b.size() + x){std::cout << "<\n";}
    else if(a.size() + y > b.size() + x){std::cout << ">\n";}
    else{
        while(x < a.size() && y < b.size()){
            if(a[x] < b[y]){std::cout << "<\n"; return 0;}
            else if(a[x] > b[y]){std::cout << ">\n"; return 0;}
            ++x; ++y;
        }

        std::cout << "=\n";
    }

    return 0;
}
