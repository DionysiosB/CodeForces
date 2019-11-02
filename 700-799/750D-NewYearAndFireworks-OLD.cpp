#include<cstdio>
#include<vector>

const int N = 410; int a[N][N];
const int dx[] = {0,1,1,1,0,-1,-1,-1};
const int dy[] = {1,1,0,-1,-1,-1,0,1};
int vis[N][N][40][10] = {0};

void dfs(int x,int y,int dir, int d, const std::vector<int> &t){

    if(d >= t.size() || vis[x][y][dir][t[d]]) return;
    vis[x][y][dir][t[d]] = 1;

    for(int p = 1; p <= t[d]; p++){a[x + dx[dir] * p][y + dy[dir] * p] = 1;}

    dfs(x + dx[dir] * t[d],y + dy[dir] * t[d], (dir + 1) % 8, d + 1, t);
    dfs(x + dx[dir] * t[d],y + dy[dir] * t[d], (dir + 7) % 8, d + 1, t);
}


int main(){

    int n; scanf("%d", &n);
    std::vector<int> t(n); for(int p = 0; p < n; p++){scanf("%d", &t[p]);}
    dfs(N / 2, N / 2, 0 , 0, t);

    long count(0);
    for(int x = 0;x < N; x++){for(int y = 0; y < N; y++){count += a[x][y];}}
    printf("%ld\n", count);

    return 0;
}
