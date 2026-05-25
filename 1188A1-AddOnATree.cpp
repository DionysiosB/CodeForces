#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> deg(n + 1, 0);
    for(long p = 1; p < n; p++){long x, y; scanf("%ld %ld", &x, &y); ++deg[x]; ++deg[y];}
    bool possible(true);
    for(long p = 1; p <= n; p++){if(deg[p] == 2){possible = false; break;}}
    puts(possible ? "YES" : "NO");

    return 0;
}
