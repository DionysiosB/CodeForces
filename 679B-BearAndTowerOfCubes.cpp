#include <cstdio>
#include <iostream>

int64_t cube(int64_t a) {return a * a * a;}

void rec(int64_t m, int64_t steps, int64_t sub, std::pair<int64_t, int64_t> &best) {
    if(m == 0){best = max(best, std::make_pair(steps, sub)); return;}
    int64_t x = 1;
    while(cube(x + 1) <= m){++x;}
    rec(m - cube(x), steps + 1, sub + cube(x), best);

    if(x >= 1){rec(cube(x) - 1 - cube(x - 1), steps + 1, sub + cube(x - 1), best);}

    return;
}

int main() {

    int64_t m; scanf("%lld", &m);
    std::pair<int64_t,int64_t> best;
    rec(m, 0, 0, best);
    printf("%lld %lld\n", best.first, best.second);

    return 0;
}
