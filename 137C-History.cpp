#include <cstdio>
#include <cstdlib>
#include <vector>
#include <algorithm>


int pairCompare(const std::pair<long,long> &lhs, const std::pair<long,long> &rhs){return (lhs.first < rhs.first);}

int main(){

    long n(0); scanf("%ld", &n);

    std::vector<std::pair<long, long>> events;
    long start(0), finish(0);
    for(long k = 0; k < n; k++){
        scanf("%ld %ld", &start, &finish);
        events.push_back(std::pair<long,long>(start,finish));
    }

    std::sort(events.begin(), events.end(), pairCompare);

    long count(0), currentMaxEnd(0);
    for(int k = 0; k < n; k++){
        if(events[k].second < currentMaxEnd){++count;}
        else{currentMaxEnd = events[k].second;}
    }

    printf("%ld\n", count);

    return 0;
}
