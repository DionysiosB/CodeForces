#include <cstdio>
#include <vector>
#include <algorithm>

std::vector<std::pair<long, long> > intervals;
std::vector<bool> visited;

void dfs(long n){

    if(visited[n]){return;}
    visited[n] = 1;
    for(long p = 1; p < intervals.size(); p++){
        if(visited[p]){continue;}
        else if(intervals[p].first < intervals[n].first && intervals[n].first < intervals[p].second){dfs(p);}
        else if(intervals[p].first < intervals[n].second && intervals[n].second < intervals[p].second){dfs(p);}
    }
}


int main(){

    int n; scanf("%d\n", &n);
    intervals.push_back(std::pair<long, long>(0,0));

    while(n--){
        long type, start, finish; scanf("%ld %ld %ld\n", &type, &start, &finish);
        if(type == 1){intervals.push_back(std::pair<long, long>(start, finish));}
        else if(type == 2){
            visited.clear(); visited.resize(intervals.size(), 0);
            dfs(start);
            if(visited[finish]){puts("YES");} else{puts("NO");}
        }
    }

    return 0;
}
