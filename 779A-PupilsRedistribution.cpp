#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    const int N = 5;

    int n; std::cin >> n;
    std::vector<int> countA(N + 1, 0), countB(N + 1, 0);
    for(int p = 0; p < n; p++){int x; std::cin >> x; ++countA[x];}
    for(int p = 0; p < n; p++){int x; std::cin >> x; ++countB[x];}

    bool possible(true);
    int total(0);
    for(int p = 1; p <= N; p++){
        int diff = countA[p] - countB[p];
        if(diff % 2){possible = false; break;}
        if(diff < 0){diff = -diff;}
        total += diff;
    }

    if(possible && (total % 4 == 0)){std::cout << (total / 4) << std::endl;}
    else{std::cout << "-1" << std::endl;}

    return 0;
}
