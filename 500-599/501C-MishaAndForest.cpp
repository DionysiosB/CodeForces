#include <iostream>
#include <vector>
#include <deque>

int main(){

    long n; std::cin >> n;
    std::vector<long> degree(n, 0);
    std::vector<long> s(n, 0);
    std::deque<long> queue;
    for(long p = 0; p < n; p++){
        std::cin >> degree[p] >> s[p];
        if(degree[p] == 1){queue.push_front(p);}
    }

    std::vector<std::pair<long, long> > edges;

    while(!queue.empty()){
        long leaf = queue.back();
        queue.pop_back();
        if(degree[leaf] < 1){continue;}
        long parent = s[leaf];
        edges.push_back(std::pair<long, long>(leaf, parent));
        --degree[parent];
        if(degree[parent] == 1){queue.push_front(parent);}
        s[parent] ^= leaf;
    }

    std::cout << edges.size() << std::endl;
    for(long p = 0; p < edges.size(); p++){std::cout << edges[p].first << " " << edges[p].second << std::endl;}

    return 0;
}
