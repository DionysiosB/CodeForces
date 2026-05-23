#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    std::ios_base::sync_with_stdio(false);
    long n; std::cin >> n;
    std::vector<long> h(n);
    std::vector<long> a(n);
    for(long p = 0; p < n; p++){std::cin >> h[p]; a[p] = h[p];}
    sort(a.begin(), a.end());

    long diff(0), blocks(0);
    for(long p = 0; p < n; p++){
        diff += a[p] - h[p];
        if(diff == 0){++blocks;}
    }

    std::cout << blocks << std::endl;

    return 0;
}
