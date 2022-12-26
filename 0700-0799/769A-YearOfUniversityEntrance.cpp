#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    int n; std::cin >> n;
    std::vector<int> a(n);
    for(int p = 0; p < n; p++){std::cin >> a[p];}
    sort(a.begin(), a.end());
    std::cout << a[n/2] << std::endl;

    return 0;
}
