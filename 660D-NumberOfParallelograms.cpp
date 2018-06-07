#include <cstdio>
#include <iostream>
#include <vector>
#include <map>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> x(n), y(n);
    for(long p = 0; p < n; p++){scanf("%ld %ld", &x[p], &y[p]);}
    std::map<std::pair<long, long>, long> m;
    for(long a = 0; a < n; a++){
        for(long b = 0; b < a; b++){
            long dx = x[a] - x[b];
            long dy = y[a] - y[b];
            if(dx < 0 || (dx == 0 && dy < 0)){dx = -dx; dy = -dy;}
            std::pair<long, long> v = std::make_pair(dx, dy);
            if(m.count(v) <= 0){m[v] = 0;}
            ++m[v];
        }
    }

    long total(0);
    for(std::map<std::pair<long, long>, long>::iterator it = m.begin(); it != m.end(); ++it){
        long same = it->second;
        total += same * (same - 1) / 2;
    }

    printf("%ld\n", total / 2);

    return 0;
}
