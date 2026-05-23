#include <iostream>
#include <set>

int main(){

    //Find m <= n such that m * (m + 1) * (3 * n - m + 1) / 6 == x;

    int64_t x; std::cin >> x;
    std::set<std::pair<int64_t, int64_t> > s;
    for(int64_t m = 1; m <= x; m++){
        int64_t n = (((6 * x) / (m * (m + 1))) + m - 1) / 3;
        if((m * (m + 1) * (3 * n - m + 1) / 6 == x)){
            s.insert(std::make_pair(m, n));
            s.insert(std::make_pair(n, m));
        }
        if(n <= m){break;}
    }

    std::cout << s.size() << std::endl;
    for(std::set<std::pair<int64_t, int64_t> >::iterator setIter = s.begin(); setIter != s.end(); setIter++){std::cout << setIter->first << " " << setIter->second << std::endl;}

    return 0;
}
