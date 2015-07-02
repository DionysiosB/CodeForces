#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long n(0), k(0); scanf("%ld %ld", &n, &k);

    long minPrice(1e9); double total(0);
    std::vector<long> stoolPrices;
    std::vector<long> stoolIndices;
    std::vector<long> lastCartContents;

    for(int p = 0; p < n; p++){
        long currentPrice(0), item(0); scanf("%ld %ld", &currentPrice, &item);

        if(currentPrice < minPrice){minPrice = currentPrice;}

        if(item == 1){stoolPrices.push_back(currentPrice);} 
        else if(item == 2){total += currentPrice;}

        printf("%.1lf\n", total);
    }

    std::sort(stoolPrices.begin(), stoolPrices.end());
    for(int p = stoolPrices.size() - 1; p >= 0; p--){
        double mult = (p + k>= stoolPrices.size()) ? 0.5 : 1; 
        total += mult * stoolPrices[p]; 
        printf("-->%.1lf\n", total);
    }
    if(stoolPrices.size() >= k){total += 0.5 * (stoolPrices[stoolPrices.size() - k] - minPrice);}


    printf("%.1lf\n", total);

    return 0;
}
