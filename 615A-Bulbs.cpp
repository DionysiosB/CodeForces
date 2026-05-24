#include <cstdio>
#include <vector>

int main(){

    int n, m; scanf("%d %d\n", &n, &m);
    std::vector<bool> bulbs(m, 0);
    while(n--){
        int x; scanf("%d", &x);
        while(x--){int y; scanf("%d", &y); bulbs[y - 1] = 1;}
    }
    bool res(1);
    for(int p = 0; p < m; p++){if(bulbs[p] == 0){res = 0;}}
    puts(res ? "YES" : "NO");

    return 0;
}
