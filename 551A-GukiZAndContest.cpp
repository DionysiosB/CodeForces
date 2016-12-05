#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    int n; scanf("%d\n", &n);
    std::vector<std::pair<int, int> > cont(n, std::pair<int, int>(0,0));
    for(int p = 0; p < n; p++){
        int score; scanf("%d", &score);
        cont[p] = std::pair<int, int>(score, p);
    }

    sort(cont.begin(), cont.end());
    int score(0), lastRank(1);
    std::vector<int> rank(n, 0);
    for(int p = n - 1; p >= 0; p--){
        int pos = cont[p].second;
        if(cont[p].first < score){rank[pos] = n - p;}
        else{rank[pos] = lastRank;}
        lastRank = rank[pos];
        score = cont[p].first;
    }

    for(int p = 0; p < n; p++){printf("%d ", rank[p]);}; puts("");

    return 0;
}
