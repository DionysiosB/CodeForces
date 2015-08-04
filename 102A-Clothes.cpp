#include <cstdio>
#include <vector>
#include <set>

int main(){

    long n, m; scanf("%ld %ld", &n, &m);
    std::vector<long> priceVec(n, 0);
    for(long p = 0; p < n; p++){scanf("%ld", &priceVec[p]);}

    std::set<std::pair<long, long> > matchSet;
    for(long p = 0; p < m; p++){
        long a, b; scanf("%ld %ld", &a, &b);
        if(b < a){long temp = a; a = b; b = temp;}
        matchSet.insert(std::pair<long, long>(a - 1, b - 1));
    }

    long minCost = 1e7;
    for(long x = 0; x < n; x++){
        for(long y = x + 1; y < n; y++){
            for(long z = y + 1; z < n; z++){
                long currentPrice = priceVec[x] + priceVec[y] + priceVec[z];
                if(matchSet.find(std::pair<long, long>(x, y)) != matchSet.end() &&
                   matchSet.find(std::pair<long, long>(y, z)) != matchSet.end() &&
                   matchSet.find(std::pair<long, long>(x, z)) != matchSet.end() &&
                   currentPrice < minCost){minCost = currentPrice;}
            }
        }
    }

    if(minCost < 1e7){printf("%ld\n", minCost);}
    else{puts("-1");}

    return 0;
}
