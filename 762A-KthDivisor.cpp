#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    int64_t n, k; std::cin >> n >> k;
    std::vector<int64_t> v;
    for(int64_t p = 1; p * p <= n; p++){
        if(n % p != 0){continue;}
        v.push_back(p);
        if(p * p != n){v.push_back(n / p);}
    }

    if(k > v.size()){std::cout << "-1" << std::endl;}
    else{
        sort(v.begin(), v.end());
        std::cout << v[k - 1] << std::endl;
    }

    return 0;
}
