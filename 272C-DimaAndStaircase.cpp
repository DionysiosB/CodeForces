#include <cstdio>
#include <iostream>
#include <vector>

int main(){

    long long n; std::cin >> n;
    std::vector<long long> state(n);
    for(long p = 0; p < n; p++){std::cin >> state[p];}

    long long m; std::cin >> m;
    while(m--){

        long long w, h; std::cin >> w >> h;
        long long bottom = (state[0] > state[w - 1] ? state[0] : state[w - 1]);
        std::cout << bottom << std::endl;
        state[0] = bottom + h;
    }

    return 0;
}
