#include <cstdio>
#include <iostream>
#include <vector>
#include <map>

int main(){

    long n; scanf("%ld\n", &n);
    std::map<long, long> counts;
    for(long p = 0; p < n; p++){
        long x; std::cin >> x;
        if(counts.count(x) > 0){++counts[x];}
        else{counts[x] = 1;}
    }

    long m; scanf("%ld\n", &m);
    std::vector<std::pair<long, long> > lang(m, std::make_pair(0, 0));
    for(long p = 0; p < m; p++){scanf("%ld ", &lang[p].first);}
    for(long p = 0; p < m; p++){scanf("%ld ", &lang[p].second);}

    long best(0), scoreA(-1), scoreB(-1);
    for(long p = 0; p < m; p++){
        long countA = (counts.count(lang[p].first) > 0) ? counts[lang[p].first] : 0;
        long countB = (counts.count(lang[p].second) > 0) ? counts[lang[p].second] : 0;
        if(countA > scoreA || (countA == scoreA && countB > scoreB)){
            scoreA = countA; scoreB = countB;
            best = p + 1;
        }
    }

    printf("%ld\n", best);

    return 0;
}
