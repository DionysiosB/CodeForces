#include <cstdio>
#include <vector>
#include <map>

long dfs(std::map<long, std::vector<long> > tree, std::vector<long> visited, std::vector<long> hasCat, long vertex, long catsBefore, long maxCats){

    if(visited[vertex]){return 0;}
    visited[vertex] = 1;
    long catsSoFar = hasCat[vertex] ? (catsBefore + 1) : 0;
    if(catsSoFar > maxCats){return 0;}
    if(tree[vertex].size() == 1 && visited[tree[vertex][0]]){return 1;}
    long count(0);
    for(long p = 0; p < tree[vertex].size(); p++){
        count += dfs(tree, visited, hasCat, tree[vertex][p], catsSoFar, maxCats);
    }

    return count;
}



int main(){

    long n, m; scanf("%ld %ld\n", &n, &m);
    std::vector<long> hasCat(n + 1, 0);
    std::vector<long> visited(n + 1, 0);
    std::map<long, std::vector<long> > tree;
    long count(0);

    for(long p = 1; p <= n; p++){scanf("%ld", &hasCat[p]);}

    for(long p = 0; p < n - 1; p++){
        long x, y; scanf("%ld %ld\n", &x, &y);
        if(tree.count(x) <= 0){std::vector<long> adjacent; tree.insert(std::pair<long, std::vector<long> >(x, adjacent));}
        if(tree.count(y) <= 0){std::vector<long> adjacent; tree.insert(std::pair<long, std::vector<long> >(y, adjacent));}
        tree[x].push_back(y); tree[y].push_back(x);
    }

    long res = dfs(tree, visited, hasCat, 1, 0, m);
    printf("%ld\n", res);

    return 0;
}
