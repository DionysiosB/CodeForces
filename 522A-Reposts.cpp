#include <iostream>
#include <map>
#include <algorithm>

int main(){

    const std::string initial = "polycarp";
    std::map<std::string, long> rank;
    rank[initial] = 1;

    long n; scanf("%ld\n", &n);
    long length(0);
    while(n--){
        std::string to, action, from; std::cin >> to >> action >> from;
        std::transform(from.begin(), from.end(), from.begin(), ::tolower);
        std::transform(to.begin(), to.end(), to.begin(), ::tolower);
        rank[to] = rank[from] + 1;
        if(rank[to] > length){length = rank[to];}
    }

    std::cout << length << std::endl;
    return 0;
}
