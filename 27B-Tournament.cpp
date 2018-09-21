#include <cstdio>
#include <vector>
#include <set>

int main(){

    int n; scanf("%d", &n);
    std::vector<int> cnt(n, 0);
    std::vector<std::set<int> > win(n);
    std::vector<std::set<int> > lose(n);

    for(int p = 1; p < n * (n - 1) / 2; p++){
        long x, y; scanf("%ld %ld", &x, &y);
        --x; --y;
        win[x].insert(y); lose[y].insert(x);
    }

    int a(-1), b(-1);
    for(int p = 0; p < n; p++){
        if(win[p].size() + lose[p].size() >= n - 1){continue;}
        if(a < 0){a = p;}
        else if(b < 0){b = p;}
    }


    for(long p = 0; p < n; p++){
        if(win[a].count(p) && lose[b].count(p)){break;}
        else if(lose[a].count(p) && win[b].count(p)){int t = a; a = b; b = t; break;}
    }

    printf("%d %d\n", a + 1, b + 1);

    return 0;
}
