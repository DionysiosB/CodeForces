#include <iostream>
#include <vector>

int main(){

    const int cap = 10;
    long n; std::cin >> n;
    std::string s; std::cin >> s;
    std::vector<int> a(cap, 0);

    for(long p = 0; p < n; p++){
        if(s[p] == 'L'){for(long u = 0; u < cap; u++){if(!a[u]){a[u] = 1; break;}}}
        else if(s[p] == 'R'){for(long u = cap - 1; u >= 0; u--){if(!a[u]){a[u] = 1; break;}}}
        else{a[s[p] - '0'] = 0;}
    }

    for(long p = 0; p < cap; p++){std::cout << a[p];}
    std::cout << std::endl;

    return 0;
}
