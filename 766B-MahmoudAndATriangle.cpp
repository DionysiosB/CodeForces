#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    std::ios_base::sync_with_stdio(false);
    long n; std::cin >> n;
    std::vector<long> a(n);
    for(long p = 0; p < n; p++){std::cin >> a[p];}
    sort(a.begin(), a.end());
    std::string res("NO");
    for(int p = 2; p < n; p++){if(a[p - 2] + a[p - 1] > a[p]){res = "YES"; break;}}
    std::cout << res << std::endl;

    return 0;
}
