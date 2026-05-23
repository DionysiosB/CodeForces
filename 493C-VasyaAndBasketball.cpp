#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long n; scanf("%ld\n", &n);
    std::vector<long long> total(2);
    std::vector<std::pair<long, long> > score;

    for(long p = 0; p < n; p++){
        long dist; scanf("%ld", &dist);
        score.push_back(std::pair<long, long>(dist, 0));
    }

    long m; scanf("%ld\n", &m);

    for(long p = 0; p < m; p++){
        long dist; scanf("%ld", &dist);
        score.push_back(std::pair<long, long>(dist, 1));
    }

    total[0] = 3 * n; total[1] = 3 * m;

    sort(score.begin(), score.end());

    long long diff = total[0] - total[1];
    long long first(total[0]), second(total[1]);

    for(long p = 0; p < score.size(); p++){
        --total[score[p].second];
        if(total[0] - total[1] > diff){diff = total[0] - total[1]; first = total[0]; second = total[1];}
    }


    printf("%lld:%lld\n", first, second);

    return 0;
}
