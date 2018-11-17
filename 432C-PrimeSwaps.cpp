#include <cstdio>
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

int main(){
    
    long n; scanf("%ld", &n);
    std::vector<long> a(n + 1), pos(n + 1);
    for(long p = 1; p <= n; p++){scanf("%ld", &a[p]); pos[a[p]] = p;}
    
    std::vector<bool> prime(n + 1, 1);
    prime[0] = prime[1] = 0;
    for(long p = 0; p * p <= n + 1; p++){
        if(!prime[p]){continue;}
        for(long q = 2 * p; q <= n; q += p){prime[q] = 0;}
    }
    
    std::vector<std::pair<long, long> > v;
    for(long p = 1; p <= n; p++){
        while(a[p] != p){
            long other = pos[p];
            long cur = p;
            while(!prime[std::abs(other - cur + 1)]){++cur;}
            v.push_back(std::make_pair(cur, other));
            long tmp = a[other]; a[other] = a[cur]; a[cur] = tmp;
            cur = a[cur]; other = a[other];
            tmp = pos[other]; pos[other] = pos[cur]; pos[cur]= tmp;
        }
    }
    
    printf("%ld\n", v.size());
    for(long p = 0; p < v.size(); p++){printf("%ld %ld\n", v[p].first, v[p].second);} 
    
    return 0;
}
