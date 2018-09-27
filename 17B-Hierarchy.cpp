#include <cstdio>
#include <map>

int main(){

    long n; scanf("%ld", &n);
    for(long p = 0; p < n; p++){long x; scanf("%ld", &x);} //Irrelevant
    long m; scanf("%ld", &m);
    std::map<long, long> cost;
    while(m--){
        long x, y, c; scanf("%ld %ld %ld", &x, &y, &c);
        if(cost.count(y) > 0){cost[y] = (cost[y] < c) ? cost[y] : c;}
        else{cost[y] = c;}
    }

    if(cost.size() < n - 1){puts("-1"); return 0;}

    long long total(0);
    for(std::map<long, long>::iterator it = cost.begin(); it != cost.end(); it++){total += it->second;}
    printf("%lld\n", total);

    return 0;
}
