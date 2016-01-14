#include <cstdio>
#include <vector>
#include <queue>
#include <map>
#include <set>

std::vector<long> flippedNodes;
std::vector<long> visitedNodes;

std::map<long, std::vector<long> > makeTreeFromEdges(std::vector<std::vector<long> >edgeVec, long root){

    std::map<long, std::vector<long> > output;
    std::queue<long> nodeQ;
    std::vector<bool> visited(edgeVec.size(), 0);
    nodeQ.push(root);
    while(nodeQ.size() > 0){
        long cur = nodeQ.front(); nodeQ.pop(); 
        if(visited[cur]){continue;}
        visited[cur] = 1;
        std::vector<long> children;
        for(int p = 0; p < edgeVec[cur].size(); p++){
            if(visited[edgeVec[cur][p]]){continue;}
            children.push_back(edgeVec[cur][p]);
            nodeQ.push(edgeVec[cur][p]);
        }
        output.insert(std::pair<long, std::vector<long> >(cur, children));
    }

    return output;
}


long countFlips(long node, long depth, int even, int odd, std::map<long, std::vector<long> > tree, std::vector<int> initial, std::vector<int> target){

    if(visitedNodes[node]){return 0;}
    visitedNodes[node] = 1;
    long output = 0;
    int currentState = (initial[node] + ((depth % 2) ? odd : even)) % 2;
    if(currentState == target[node]){
        //printf("Node %ld at depth %ld with initial %d (even=%d, odd=%d), current %d and target %d not flipped\n", node, depth, initial[node], even, odd, currentState, target[node]);
        for(int p = 0; p < tree[node].size(); p++){
            output += countFlips(tree[node][p], depth + 1, even, odd, tree, initial, target);
        }
    }
    else{
        //printf("Node %ld at depth %ld with initial %d (even=%d, odd=%d), current %d and target %d Flipped\n", node, depth, initial[node], even, odd, currentState, target[node]);
        flippedNodes.push_back(node);
        for(int p = 0; p < tree[node].size(); p++){
            output += countFlips(tree[node][p], depth + 1, ((depth + 1) % 2 + even) % 2, ((depth % 2)+ odd) % 2, tree, initial, target);
        }
    }

    //printf("Node %ld at depth %ld returned %ld\n", node, depth, output);

    return output;
}



int main(){

    const long treeRoot = 1;
    long n; scanf("%ld\n", &n);
    std::vector<std::vector<long> > edges(n + 1);
    for(long p = 1; p < n; p++){
        long u, v; scanf("%ld %ld\n", &u, &v);
        edges[u].push_back(v); edges[v].push_back(u);
    }

    std::map<long, std::vector<long> > tree = makeTreeFromEdges(edges, 1);

    std::vector<int> initialState(n + 1, 0); for(long p = 1; p <= n; p++){scanf("%d", &initialState[p]);}
    std::vector<int> targetState(n + 1, 0);  for(long p = 1; p <= n; p++){scanf("%d", &targetState[p]);}
    visitedNodes.resize(n + 1, 0);
    //for(long p = 1; p <= n; p++){printf("*%d\t", targetState[p]);}; puts("");

    long total = countFlips(treeRoot, 0, 0, 0, tree, initialState, targetState);
    
    /*
    for(std::map<long, std::vector<long> >::iterator mapIter = tree.begin(); mapIter != tree.end(); mapIter++){
        long parent = mapIter->first;
        std::vector<long> sons = mapIter->second;
        for(int p = 0; p < sons.size(); p++){printf("%ld --> %ld\n", parent, sons[p]);}
    }
    */

    printf("%ld\n", flippedNodes.size()); 
    for(long p = 0; p < flippedNodes.size(); p++){printf("%ld\n", flippedNodes[p]);}

    return 0;
}
