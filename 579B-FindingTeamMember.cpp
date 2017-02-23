#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long n; scanf("%ld\n", &n);
    long N = n * (2 * n - 1);
    std::vector<std::pair<long, std::pair<long, long> > > strength;

    for(long p = 0; p < 2 * n; p++){
        for(long q = 0; q < p; q++){
            long value; scanf("%ld", &value);
            std::pair<long, long> team; team.first = q; team.second = p;
            strength.push_back(std::pair<long, std::pair<long, long> >(value, team));
        }
    }

    sort(strength.begin(), strength.end());
    std::vector<long> ans(2 * n, -1);

    for(long p = strength.size() - 1; p >= 0; p--){
        std::pair<long, long> team = strength[p].second;
        if(ans[team.first] >= 0 || ans[team.second] >= 0){continue;}

        ans[team.first] = team.second;
        ans[team.second] = team.first;
    }

    for(long p = 0; p < 2 * n; p++){printf("%ld ", 1 + ans[p]);}
    puts("");



    return 0;
}

