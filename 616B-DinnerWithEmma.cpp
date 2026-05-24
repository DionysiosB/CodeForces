#include <iostream>

int main(){

    const long MAX_COST = 1000000007;
    std::ios_base::sync_with_stdio(false);

    long n, m; std::cin >> n >> m;

    long optimalCost(0);
    for(int row = 0; row < n; row++){
        long minRowCost(MAX_COST);
        for(int col = 0; col < m; col++){
            long cost; std::cin >> cost;
            minRowCost = (cost < minRowCost) ? cost : minRowCost;
        }

        optimalCost = (optimalCost > minRowCost) ? optimalCost : minRowCost;
    }

    std::cout << optimalCost << std::endl;

    return 0;
}
