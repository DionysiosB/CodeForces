#include <iostream>
#include <vector>

int main(){

    long n; std::cin >> n;
    std::string s; std::cin >> s;

    int count(0);
    std::vector<int> seg;
    for(size_t p = 0; p < s.size(); p++){
        if(s[p] == 'W' && (count > 0)){seg.push_back(count); count = 0;}
        else if(s[p] == 'B'){++count;}
    }

    if(count > 0){seg.push_back(count);}

    std::cout << seg.size() << std::endl;
    for(size_t p = 0; p < seg.size(); p++){std::cout << seg[p] << " ";}
    std::cout << std::endl;

    return 0;
}
