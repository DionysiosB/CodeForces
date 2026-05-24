#include <iostream>
#include <vector>
#include <algorithm>

bool cmp(std::string s, std::string t){return (s + t) < (t + s);}

int main(){

    std::ios_base::sync_with_stdio(false);
    long n; std::cin >> n;
    std::vector<std::string> a(n); 
    for(long p = 0; p < n; p++){std::cin >> a[p];}
    sort(a.begin(), a.end(), cmp);
    for(long p = 0; p < n; p++){std::cout << a[p];}
    std::cout << std::endl;

    return 0;
}
