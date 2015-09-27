#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    int N = 26;
    std::vector<long long> countVec(N, 0);

    long long n, k; scanf("%lld %lld\n", &n, &k);
    std::string cards; getline(std::cin, cards);

    for(int p = 0; p < cards.size(); p++){++countVec[cards[p] - 'A'];}

    sort(countVec.begin(), countVec.end());

    long long output = 0;
    for(int p = countVec.size() - 1; p >= 0; p--){
        if(countVec[p] < k){output += countVec[p] * countVec[p]; k -= countVec[p];}
        else{output += k * k; break;}
    }

    std::cout << output << std::endl;

    return 0;
}
