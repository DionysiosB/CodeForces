#include <cstdio>
#include <vector>
#include <map>

int main(){
    
    int n(0), m(0); scanf("%d %d", &n, &m);

    std::map<int, int> teamMap;
    for(int k = 1; k <= n; k++){teamMap.insert(std::pair<int, int>(k, -1));}
    std::vector<int> teamSize(n/3, 0);
    bool possible(1);
    int nextTeam = 0;

    for(int k = 0; k < m; k++){
        int a, b; scanf("%d %d", &a, &b);
        if(teamMap[a] >= 0 && teamMap[b] < 0){teamMap[b] = teamMap[a]; ++teamSize[teamMap[a]];}
        else if(teamMap[b] >= 0 && teamMap[a] < 0){teamMap[a] = teamMap[b]; ++teamSize[teamMap[b]];}
        else if(teamMap[a] < 0 && teamMap[b] < 0){teamMap[a] = teamMap[b] = nextTeam; teamSize[nextTeam++] = 2;}
        else if(teamMap[a] >= 0 && teamMap[b] >= 0 && teamMap[a] != teamMap[b]){possible = 0; break;}
    }

    for(int k = 1; k <= n; k++){
        if(teamMap[k] >= 0){continue;}
        for(int t = 0; t < n/3; t++){if(teamSize[t] < 3){teamMap[k] = t; ++teamSize[t]; break;}}
    }

    for(int k = 0; k < n / 3; k++){if(teamSize[k] != 3){possible = 0; break;}}

    if(possible){
        for(int t = 0; t < n/3; t++){
            for(int p = 1; p <= n; p++){if(teamMap[p] == t){printf("%d ", p);}}
            puts("");
        }
    }
    else{puts("-1");}

    return 0;
}
