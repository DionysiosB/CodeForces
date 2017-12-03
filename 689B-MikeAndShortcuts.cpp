#include <cstdio>
#include <vector>
#include <queue>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n + 1);
    for(long p = 1; p <= n; p++){scanf("%ld", &a[p]);}

    std::vector<long> dist(n + 1, -1);
    dist[1] = 0;
    std::queue<long> q; q.push(1);

    while(!q.empty()){
        long current = q.front();
        q.pop();
        long prev = current - 1;
        long next = current + 1;
        long path = a[current];
        long cand = 1 + dist[current];
        if((prev >= 1) && ((dist[prev] < 0) || (dist[prev] > cand)) ){dist[prev] = cand; q.push(prev);}
        if((next <= n) && ((dist[next] < 0) || (dist[next] > cand)) ){dist[next] = cand; q.push(next);}
        if(( dist[path] < 0) || (dist[path] > cand) ){dist[path] = cand; q.push(path);}
    }

    for(long p = 1; p <= n; p++){printf("%ld ", dist[p]);}
    puts("");

    return 0;
}
