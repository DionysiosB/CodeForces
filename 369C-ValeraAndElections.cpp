#include <cstdio>
#include <vector>
#include <map>
#include <set>
    
const int root = 1;
std::vector<std::vector<long> > edges;
std::vector<bool> broken;
std::vector<bool> visited;
std::vector<long> repairs;

void dfs(long node){

    if(visited[node]){return;} 
    visited[node] = 1;
    //printf("Node: %ld\n", node);
    if(broken[node]){
        repairs[node] = 1;
        //printf("Node is broken\n");
    }

    for(long p = 0; p < edges[node].size(); p++){
        long child = edges[node][p];
        if(visited[child]){continue;}
        //printf("Will visit child %ld\n", child);
        dfs(child);
        repairs[node] += repairs[child];
        //printf("Adding child's %ld repairs to parent %ld, which now equals %ld\n", child, node, repairs[node]);
    }

    //printf("Repairs for node %ld equal %ld\n", node, repairs[node]);


}

int main(){

    long n; scanf("%ld\n", &n);
    edges.resize(n + 1); broken.resize(n + 1); repairs.resize(n + 1); visited.resize(n + 1);

    for(long p = 1; p < n; p++){
        long a, b, r; scanf("%ld %ld %ld\n", &a, &b, &r);
        edges[a].push_back(b); edges[b].push_back(a);
        if(r == 2){broken[a] = 1; broken[b] = 1;}
    }

    dfs(root);

    std::vector<long> toVote;
    for(long p = 1; p <= n; p++){if(repairs[p] == 1){toVote.push_back(p);}}
    printf("%ld\n", toVote.size());
    for(long p = 0; p < toVote.size(); p++){printf("%ld ", toVote[p]);}; puts("");

    return 0;
}
