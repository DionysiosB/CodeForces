#include <cstdio>
#include <vector>

int main (){

    const int R = 90;
    const int D = 1440;

    const int S = 20;
    const int B = 50;
    const int L = 120;

    long n; scanf("%ld", &n);
    std::vector<long> t(n + 1, 0), fee(n + 1, 0);

    long tb(0), td(0);
    for (int p = 1; p <= n; ++p){
        scanf("%ld", &t[p]);

        while(t[tb + 1] + R <= t[p]){++tb;}
        while(t[td + 1] + D <= t[p]){++td;}

        fee[p] = ((fee[p - 1] + S) < (fee[tb] + B)) ? (fee[p - 1] + S) : (fee[tb] + B);
        fee[p] = (fee[p] < (fee[td] + L)) ? fee[p] : (fee[td] + L);
        printf("%ld\n", fee[p] - fee[p - 1]);
    }

    return 0;
}
