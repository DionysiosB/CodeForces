#include <cstdio>
#include <vector>
#include <map>

struct wedge{int source, target; long diameter;};

int main(){

    int n, p; scanf("%d %d\n", &n, &p);

    std::vector<int> degrees(n + 1, 0);
    std::map<int, std::pair<int, long> > edges;

    for(int s = 0; s < p; s++){
        int from, to; long cap; scanf("%d %d %ld\n", &from, &to, &cap);
        --degrees[from]; ++degrees[to]; 
        edges.insert(std::pair<int, std::pair<int, long> >(from, std::pair<int, long>(to, cap)));
    }

    std::vector<wedge> combined;

    for(int h = 1; h <= n; h++){
        if(degrees[h] >= 0){continue;}

        long cap = 1e6 + 1;
        int tap = h;
        while(edges.count(tap) > 0){
            if(edges[tap].second < cap){cap = edges[tap].second;}
            tap = edges[tap].first;
        }

        wedge temp; temp.source = h; temp.target = tap; temp.diameter = cap;
        combined.push_back(temp);

    }

    printf("%lu\n", combined.size());
    for(int p = 0; p < combined.size(); p++){printf("%d %d %ld\n", combined[p].source, combined[p].target, combined[p].diameter);}


    return 0;
}
