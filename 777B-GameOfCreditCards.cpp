#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    std::ios_base::sync_with_stdio(false);
    int n; std::cin >> n;
    std::string t1, t2; std::cin >> t1 >> t2;
    std::vector<int> s(n), m(n);
    for(int p = 0; p < n; p++){s[p] = t1[p] - '0'; m[p] = t2[p] - '0';}
    sort(s.begin(), s.end());
    sort(m.begin(), m.end());

    int k(0);
    for(int p = 0; p < n; p++){if(m[p] >= s[k]){++k;}}
    std::cout << (n - k) << std::endl;

    k = 0;
    for(int p = 0; p < n; p++){if(m[p] > s[k]){++k;}}
    std::cout << k << std::endl;

    return 0;
}
