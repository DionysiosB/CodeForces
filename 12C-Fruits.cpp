#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

int main(){

    int n, m; scanf("%d %d\n", &n, &m);
    std::vector<int> prices(n);
    for(int p = 0; p < n; p++){scanf("%d", &prices[p]);}; scanf("\n");
    std::map<std::string, int> list;
    for(int p = 0; p < m; p++){
        std::string fruit; getline(std::cin, fruit);
        if(list.count(fruit) > 0){++list[fruit];}
        else{list.insert(std::pair<std::string, int>(fruit, 1));}
    }

    std::vector<int> counts;
    for(std::map<std::string, int>::iterator mapIter = list.begin(); mapIter != list.end(); mapIter++){counts.push_back(mapIter->second);}

    sort(prices.begin(), prices.end());
    sort(counts.begin(), counts.end());

    int minSum(0), maxSum(0), c(counts.size());
    for(int p = 0; p < c; p++){
        minSum += counts[p] * prices[c - 1 - p];
        maxSum += counts[p] * prices[n - c + p];
    }

    printf("%d %d\n", minSum, maxSum);

    return 0;
}
