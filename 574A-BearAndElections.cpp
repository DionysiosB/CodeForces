#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long n; scanf("%ld\n", &n);
    long limak; scanf("%ld", &limak);
    std::vector<long> votes(n - 1);
    for(long p = 0; p < n - 1; p++){scanf("%ld", &votes[p]);}
    sort(votes.begin(), votes.end());
    long maxVotes = votes[n - 2];
    long maxCount = 0;
    for(long p = n - 2; p >= 0; p--){
        if(votes[p] == maxVotes){++maxCount;}
        else{break;}
    }
    printf("== %ld %ld\n", maxCount, maxVotes);

    long diff = maxVotes - limak;
    long steps = (diff >= 0) ? (1 + diff) / (maxCount + 1) : 0;
    long initial = maxCount * steps;
    long additional = diff - (maxCount + 1) * steps  + 1;
    long needed = initial + additional * (additional > 0);
    printf("== %ld %ld %ld %ld\n", diff, steps,  initial, additional);
    printf("%ld\n", needed);
    return 0;
}
