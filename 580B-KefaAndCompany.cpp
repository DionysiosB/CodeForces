#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long long n, d; scanf("%lld %lld\n", &n, &d);
    std::vector<std::pair<long long, long long> > friends(n);
    for(long long p = 0; p < n; p++){scanf("%lld %lld\n", &friends[p].first, &friends[p].second);}
    sort(friends.begin(), friends.end());

    std::vector<long long> factors(n);
    factors[0] = friends[0].second;
    for(long long p = 1; p < n; p++){factors[p] = factors[p - 1] + friends[p].second;}

    long long optimal(0);
    long long ind(n - 1);
    for(long long p = n - 1; p >= 0; p--){
        long long money = friends[p].first;
        while(friends[ind].first >= money + d){--ind;}
        long long total = factors[ind] - ((p > 0) ? factors[p - 1] : 0);
        if(total > optimal){optimal = total;}
    }
 
    printf("%lld\n", optimal);
    return 0;
}
