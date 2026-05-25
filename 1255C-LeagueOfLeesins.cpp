#include<cstdio>
#include<vector>

int main() {

    long n; scanf("%ld", &n);
    std::vector<std::vector<long> > v(n + 1);
    std::vector<long> vis(n + 1, 0), cnt(n + 1, 0);
    long x,y,z; 
    for(long p = 1; p <= n - 2; p++) {
        scanf("%ld %ld %ld",&x,&y,&z);
        v[x].push_back(y),v[x].push_back(z);
        v[y].push_back(x),v[y].push_back(z);
        v[z].push_back(x),v[z].push_back(y);
        cnt[x]++; cnt[y]++; cnt[z]++;
    }

    for(long p = 1; p <= n; p++){if(cnt[p] == 1){x = p; break;}}

    if(cnt[v[x][0]] == 2){y = v[x][0];}
    else{y = v[x][1];}

    vis[x] = vis[y] = 1;
    printf("%ld %ld ", x, y);

    for(long p = 1; p <= n-2; p++){
        long z;
        for(long q = 0; q < v[x].size(); q++){if(!vis[v[x][q]]){z = v[x][q];}}
        printf("%ld ", z);
        vis[z]=1; x = y; y = z;
    }

    puts("");

    return 0;
}
