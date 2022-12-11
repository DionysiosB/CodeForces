#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long n; scanf("%ld\n", &n);
    std::vector<std::pair<long, long> > players(n);
    for(long p = 0; p < n; p++){
        long skill; scanf("%ld", &skill);
        players[p] = std::pair<long, long>(skill, p + 1);
    }

    sort(players.begin(), players.end());

    printf("%ld\n", (n + 1) / 2);
    for(long p = 0; p < n; p += 2){printf("%ld ", players[p].second);}
    printf("\n%ld\n", n / 2);
    for(long p = 1; p < n; p += 2){printf("%ld ", players[p].second);}
    puts("");

    return 0;
}
