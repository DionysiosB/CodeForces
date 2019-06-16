#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<std::vector<long> > g(n + 1);
    for(long p = 1; p < n; p++){
        long x, y; scanf("%ld %ld", &x, &y);
        g[x].push_back(y); g[y].push_back(x);
    }

    bool possible(true);
    long center(-1);
    std::vector<long> ends;
    for(long p = 1; p <= n; p++){
        if(g[p].size() == 1){ends.push_back(p);}
        else if(g[p].size() > 2){
            if(center >= 0){possible = false; break;}
            else{center = p;}
        }
    }

    if(!possible){puts("No"); return 0;}
    else{
        puts("Yes");
        if(center < 0 && ends.size() >= 2){printf("1\n%ld %ld\n", ends[0], ends[1]);}
        else{
            printf("%ld\n", ends.size());
            for(long p = 0; p < ends.size(); p++){printf("%ld %ld\n", center, ends[p]);}}
    }

    return 0;
}
