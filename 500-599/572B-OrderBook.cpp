#include <cstdio>
#include <vector>
#include <map>
#include <algorithm>

int main(){

    std::map<long, long> bids;
    std::map<long, long> offers;

    long n, s; scanf("%ld %ld\n", &n, &s);
    while(n--){
        char direction; long price, volume; scanf("%c %ld %ld\n", &direction, &price, &volume);
        if(direction == 'B'){
            if(bids.count(price) <= 0){bids.insert(std::pair<long, long>(price, 0));}
            bids[price] += volume;
        }
        else if(direction == 'S'){
            if(offers.count(price) <= 0){offers.insert(std::pair<long, long>(price, 0));}
            offers[price] += volume;
        }
    }

    std::map<long,long>::iterator mapIter;
    std::vector<long> prices;
    for(mapIter = offers.begin(); mapIter != offers.end(); mapIter++){
        prices.push_back(mapIter->first);
    }
    sort(prices.begin(), prices.end());
    int m = prices.size();
    for(int p = s - 1; p >= 0; p--){
        if(p >= m){continue;}
        printf("S %ld %ld\n", prices[p], offers[prices[p]]);
    }

    prices.clear();
    for(mapIter = bids.begin(); mapIter != bids.end(); mapIter++){
        prices.push_back(mapIter->first);
    }
    sort(prices.begin(), prices.end());
    m = prices.size();
    for(int p = m - 1; (p >= 0) && (p > m - 1 - s); p--){
        printf("B %ld %ld\n", prices[p], bids[prices[p]]);
    }

    return 0;
}
