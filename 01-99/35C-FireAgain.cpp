#include <cstdio>
#include <vector>

int mabs(int x){return (x > 0) ? x : (-x);}

int main(){

    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);

    int n, m; scanf("%d %d", &n, &m);
    int k; scanf("%d", &k);
    std::vector<int> vsr(k), vsc(k);
    for(int p = 0; p < k; p++){scanf("%d %d", &vsr[p], &vsc[p]);}

    int rr(-1), cc(-1), maxMin(-1);
    for(int row = 1; row <= n; row++){
        for(int col = 1; col <= m; col++){
            int minDist = 2e9;
            for(int p = 0; p < k; p++){
                int dist = mabs(row - vsr[p]) + mabs(col - vsc[p]);
                minDist = (dist < minDist) ? dist : minDist;
            }

            if(minDist > maxMin){maxMin = minDist; rr = row; cc = col;}
        }
    }

    printf("%d %d\n", rr, cc);

    return 0;
}
