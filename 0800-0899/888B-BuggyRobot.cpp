#include <iostream>
#include <map>

int main(){

    long n; std::cin >> n;
    std::string s; std::cin >> s;
    long left(0), right(0), up(0), down(0);
    for(long p = 0; p < n; p++){
        if(s[p] == 'L'){++left;}
        else if(s[p] == 'R'){++right;}
        else if(s[p] == 'U'){++up;}
        else if(s[p] == 'D'){++down;}
    }

    long count = 2 * (left < right ? left : right) + 2 * (up < down ? up : down);
    std::cout << count << std::endl;

    return 0;
}
