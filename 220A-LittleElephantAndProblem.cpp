#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    long n; std::cin >> n;
    std::vector<long> original(n, 0);
    std::vector<long> sorted(n, 0);

    for(long p = 0; p < n; p++){std::cin >> original[p]; sorted[p] = original[p];}
    sort(sorted.begin(), sorted.end());
    
    int different(0);
    for(long p = 0; p < n; p++){
        if(original[p] != sorted[p]){++different;}
        if(different > 2){break;}
    }

    puts((different <= 2) ? "YES" : "NO");

    return 0;

}
