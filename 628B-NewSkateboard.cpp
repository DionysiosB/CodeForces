#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);

    std::string s; getline(std::cin, s);

    int prev(0), current(0);
    int64_t total(0);
    for(long p = 0; p < s.size(); p++){
        int current = s[p] - '0';
        int twoDigit = 10 * prev + current;
        if(twoDigit % 4 == 0){total += p;}
        if(current % 4 == 0){++total;}
        prev = current;
    }

    std::cout << total << std::endl;

    return 0;
}
