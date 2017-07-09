#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    int n; std::cin >> n;
    std::vector<int64_t> count(n, 0);
    for(int p = 0; p < n; p++){std::cin >> count[p];}

    sort(count.begin(), count.end());

    int64_t total(0);
    int64_t prev = count[n - 1] + 1;
    for(int p = n - 1; p >= 0; p--){
        if(prev <= count[p]){--prev;} else {prev = count[p];}
        total += (prev > 0) * prev;
    }

    std::cout << total << std::endl;

    return 0;
}
