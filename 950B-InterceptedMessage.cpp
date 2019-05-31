#include <cstdio>
#include <vector>

int main(){

    long n, m; scanf("%ld %ld", &n, &m);
    std::vector<long> x(n + 1, 0);
    for(long p = 1; p <= n; p++){long u; scanf("%ld", &u); x[p] = x[p - 1] + u;}

    std::vector<long> y(m + 1, 0);
    for(long p = 1; p <= m; p++){long u; scanf("%ld", &u); y[p] = y[p - 1] + u;}

    long cnt(0), indx(1), indy(1);
    while(indx <= n && indy <= m){
        if(x[indx] == y[indy]){++indx; ++indy; ++cnt;}
        else if(x[indx] < y[indy]){++indx;}
        else if(x[indx] > y[indy]){++indy;}
    }

    printf("%ld\n", cnt);

    return 0;
}
