#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

bool scmp(std::pair<long, long> a, std::pair<long, long> b){return a.second < b.second;}


int main(){

    long n; scanf("%ld", &n);
    std::vector<std::pair<long, long> > chess(n);
    for(long p = 0; p < n; p++){scanf("%ld %ld", &chess[p].first, &chess[p].second);}

    long m; scanf("%ld", &m);
    std::vector<std::pair<long, long> > prog(m);
    for(long p = 0; p < m; p++){scanf("%ld %ld", &prog[p].first, &prog[p].second);}

    sort(chess.begin(), chess.end(), scmp);
    sort(prog.begin(), prog.end());
    long t1 = prog.back().first - chess[0].second;
    t1 = (t1 > 0) ? t1 : 0;

    sort(prog.begin(), prog.end(), scmp);
    sort(chess.begin(), chess.end());
    long t2 = chess.back().first - prog[0].second;
    t2 = (t2 > 0) ? t2 : 0;

    printf("%ld\n", ((t1 > t2) ? t1 : t2));

    return 0;
}
