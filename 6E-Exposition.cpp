#include <cstdio>
#include <iostream>
#include <vector>
#include <set>

int main(){

    long n, k; scanf("%ld %ld", &n, &k);
    std::vector<long> h(n + 1); for(long p = 1; p <= n; p++){scanf("%ld", &h[p]);}
    std::multiset<long> ms;
    std::vector<std::pair<long, long> > dur;
    long left(1), maxLength(0);

    for(long p = 1; p <= n; p++){
        ms.insert(h[p]);
        while(*ms.rbegin() - *ms.begin() > k){ms.erase(ms.find(h[left])); left++;}
        if(p - left + 1 > maxLength){maxLength = p - left + 1; dur.erase(dur.begin(), dur.end()); dur.push_back(std::make_pair(left, p));}
        else if(p - left + 1 == maxLength){dur.push_back(std::make_pair(left, p));}
    }

    printf("%ld %ld\n", maxLength, dur.size());
    for(long p = 0; p < dur.size(); p++){printf("%ld %ld\n", dur[p].first, dur[p].second);}

    return 0;
}
