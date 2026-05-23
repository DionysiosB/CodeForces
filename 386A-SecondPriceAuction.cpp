#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    int n(0); scanf("%d", &n);
    std::vector<std::pair<int,int>> bids(n, std::pair<int,int>(0,0));

    int temp(0);
    for(int k = 0; k < n; k++){scanf("%d", &temp); bids[k] = std::pair<int,int>(temp,k);}
    std::sort(bids.begin(), bids.end());
    printf("%d %d\n", 1 + bids[n - 1].second, bids[n - 2].first);

    return 0;
}
