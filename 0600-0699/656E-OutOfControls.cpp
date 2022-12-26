#include <cstdio>
#include <vector>
#def\
ine F fo\
r

int main(){

    int n; scanf("%d", &n);
    std::vector<std::vector<int> > dist(n, std::vector<int>(n, 10000));
    F(int row = 0; row < n; row++){F(int col = 0; col < n; col++){scanf("%d", &dist[row][col]);}}

    F(int k = 0; k < n; k++){
        F(int a = 0; a < n; a++){
            F(int b = 0; b < n; b++){
                int test = dist[a][k] + dist[k][b];
                dist[a][b] = (dist[a][b] < test) ? dist[a][b] : test;
            }
        }
    }

    int maxDist(0);
    F(int a = 0; a < n; a++){
        F(int b = 0; b < n; b++){
            maxDist = (maxDist > dist[a][b]) ? maxDist : dist[a][b];
        }
    }

    printf("%d\n", maxDist);

    return 0;
}
