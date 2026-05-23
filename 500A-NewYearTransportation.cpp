#include <cstdio>
#include <map>
#include <set>

int main(){

    long n, t; scanf("%ld %ld\n", &n, &t);
    std::map<long, long> move;
    for(long p = 1; p < n; p++){long a; scanf("%ld", &a); move.insert(std::pair<long, long>(p, p + a));}

    std::set<long> visited;
    long current = 1; 
    bool possible(0);

    while(true){
        if(current == t){possible = 1; break;}
        else if(current == n || visited.count(current)){break;}
        else{visited.insert(current); current = move[current];}
    }

    puts(possible ? "YES" : "NO");

    return 0;
}
