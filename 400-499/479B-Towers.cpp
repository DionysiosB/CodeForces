#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long n, k; scanf("%ld %ld\n", &n, &k);
    std::vector<std::pair<long, long> > heightVec(n);

    for(int p = 0; p < n; p++){
        long temp; scanf("%ld", &temp); heightVec[p].first = temp;
        heightVec[p].second = p + 1;
    }

    std::vector<std::pair<long, long> > moves;
    long instability(0);

    for(int q = 0; q < k; q++){
        sort(heightVec.begin(), heightVec.end());
        if(heightVec[n - 1].first <= heightVec[0].first + 1){break;}
        --heightVec[n - 1].first; ++heightVec[0].first;
        moves.push_back(std::pair<long, long>(heightVec[n - 1].second, heightVec[0].second));
    }

    sort(heightVec.begin(), heightVec.end());
    printf("%ld %ld\n", heightVec[n - 1].first - heightVec[0].first , moves.size());
    for(int p = 0; p < moves.size(); p++){
        printf("%ld %ld\n", moves[p].first, moves[p].second);
    }

    return 0;
}
