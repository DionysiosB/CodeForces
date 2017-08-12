#include <iostream>
#include <map>

int main(){

    std::ios_base::sync_with_stdio(false);

    std::map<long, long> counts;
    long n; std::cin >> n;
    long best(-1), maxCount(-1);
    while(n--){

        long x; std::cin >> x;
        if(counts.count(x)){++counts[x];}
        else{counts[x] = 1;}

        if(counts[x] > maxCount){maxCount = counts[x]; best = x;}
    }

    std::cout << best << std::endl;

    return 0;
}
