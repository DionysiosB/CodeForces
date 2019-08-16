#include <iostream>
#include <map>

int main(){

    long n, m, k; std::cin >> n >> m >> k;
    std::map<int, int> pos;
    for(int p = 1; p <= k; p++){
        int x; std::cin >> x;
        pos[x] = p;
    }

    long count(0);
    for(int c = 0; c < n; c++){
        for(int d = 0; d < m; d++){
            int x; std::cin >> x;
            int init = pos[x];
            count += init;
            pos[x] = 1;
            for(int p = 1; p <= k; p++){if(p != x && pos[p] <= init){++pos[p];}}
        }
    }
    
    std::cout << count << std::endl;

    return 0;
}
