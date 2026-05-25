#include <iostream>
#include <string>
#include <vector>
typedef long long ll;

int main(){

    const std::string t = "codeforces";
    std::vector<ll> v(t.size(), 1);
    ll prod(1); ll idx(0);
    ll k; std::cin >> k;
    while(prod < k){prod /= v[idx]; ++v[idx]; prod *= v[idx]; idx = (idx + 1) % t.size();}
    for(long p = 0; p < t.size(); p++){std::cout << std::string(v[p], t[p]);}
    std::cout << std::endl;

    return 0;
}
