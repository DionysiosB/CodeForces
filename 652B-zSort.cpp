#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    std::ios_base::sync_with_stdio(false);
    long n; std::cin >> n;
    std::vector<long> a(n, 0);
    for(long p = 0; p < n; p++){std::cin >> a[p];}
    sort(a.begin(), a.end());

    for(long p = 1; p < n - 1; p += 2){long temp = a[p]; a[p] = a[p + 1]; a[p + 1] = temp;}
    for(long p = 0; p < n; p++){std::cout << a[p] << " ";}
    std::cout << std::endl;

    return 0;
}
