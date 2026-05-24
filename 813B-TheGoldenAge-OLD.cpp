#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <climits>

int main(){

    const int N = 60; //binary log 10^18
    int64_t x, y, l, r; std::cin >> x >> y >> l >> r;
    std::vector<int64_t> v; v.push_back(l - 1); v.push_back(r + 1);
    for(int a = 0; a < N; a++){
        if(pow(x, a) >= ULLONG_MAX){continue;}
        for(int b = 0; b < N; b++){
            if(pow(y, b) >= ULLONG_MAX){continue;}
            double cand = pow(x, a) + pow(y, b);
            if(l <= cand && cand <= r){int64_t z = cand; v.push_back(z);}
        }
    }

    sort(v.begin(), v.end());
    int64_t golden(0);
    for(long p = 1; p < v.size(); p++){
        int64_t diff = v[p] - v[p - 1] - 1;
        golden = (golden > diff) ? golden : diff;
    }

    std::cout << golden << std::endl;

    return 0;
}
