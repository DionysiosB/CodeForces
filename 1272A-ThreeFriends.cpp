#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long q; scanf("%ld", &q);
    while(q--){
        std::vector<long> x(3); scanf("%ld %ld %ld", &x[0], &x[1], &x[2]);
        sort(x.begin(), x.end());
        if(x[0] < x[2]){++x[0];}
        if(x[1] < x[2]){++x[1];}
        if(x[2] > x[0]){--x[2];}
        long ans = 2 * (x[2] - x[0]);
        printf("%ld\n", ans);
    }

    return 0;
}
