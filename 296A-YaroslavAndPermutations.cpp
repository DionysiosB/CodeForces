#include <cstdio>
#include <map>

int main(){
    int n; scanf("%d\n", &n);
    std::map<int,int> counts;

    int temp(0);
    for(int k = 0; k < n; k++){
        scanf("%d", &temp);
        if(counts.find(temp) == counts.end()){counts.insert(std::pair<int,int>(temp,1));}
        else{++counts[temp];}
    }

    bool possible = 1;
    for(std::map<int,int>::iterator countIter = counts.begin(); countIter != counts.end(); countIter++){if( (countIter -> second) > (n + 1)/2){possible = 0;}}
    possible ? puts("YES") : puts("NO");
    return 0;
}
