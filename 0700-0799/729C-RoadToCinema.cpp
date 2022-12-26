#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

bool check(const std::vector<long> pos, long t, long cap){

    long totalTime(0);
    for(long p = 1; p < pos.size(); p++){
        long dist = pos[p] - pos[p - 1];
        if(cap < dist){return false;}
        else if(cap >= 2 * dist){totalTime += dist;}
        else{totalTime += 2 * (2 * dist - cap) + (cap - dist);}
        if(totalTime > t){return false;}
    }

    return (totalTime <= t);
}


int main(){

    long n, k, s, t; scanf("%ld %ld %ld %ld", &n, &k, &s, &t);
    std::vector<std::pair<long, long> > cars(n);
    for(long p = 0; p < n; p++){
        long c, v; scanf("%ld %ld", &c, &v);
        cars[p] = std::make_pair(c, v);
    }

    std::vector<long> pos(k + 2); pos[0] = 0;
    for(long p = 1; p <= k; p++){long x; scanf("%ld", &x); pos[p] = x;}
    pos[k + 1] = s;
    sort(pos.begin(), pos.end());

    long cap(1e9 + 10), m(0), M(1e9 + 10);
    while(m <= M){
        long test = (m + M) / 2;
        if(check(pos, t, test)){cap = test; M = test - 1;}
        else{m = test + 1;}
    }

    long minPrice(-1);
    for(long p = 0; p < n; p++){
        if(cars[p].second < cap){continue;}
        if((minPrice < 0) || cars[p].first < minPrice){minPrice = cars[p].first;}
    }

    printf("%ld\n", minPrice);

    return 0;
}
