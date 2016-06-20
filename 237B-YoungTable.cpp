#include <cstdio>
#include <vector>

int main(){

    const int N = 50;
    int n; scanf("%d\n", &n);
    std::vector<std::vector<int> > a(n + 1);
    std::vector<int> c(n + 1, 0), rowVec(N * N + 1, 0), colVec(N * N + 1, 0);
    for(int p = 1; p <= n; p++){
        scanf("%d", &c[p]);
        std::vector<int> temp(1 + c[p], 0);
        a[p] = temp;
    }

    for(int row = 1; row <= n; row++){
        for(int col = 1; col <= c[row]; col++){
            scanf("%d", &a[row][col]);
            rowVec[a[row][col]] = row;
            colVec[a[row][col]] = col;
        }
    }

    int current = 0;
    std::vector<std::pair<std::pair<int, int> , std::pair<int, int> > > swaps;
    for(int row = 1; row <= n; row++){
        for(int col = 1; col <= c[row]; col++){
            ++current;
            if(a[row][col] == current){continue;}
            std::pair<int, int> source(row, col);
            std::pair<int, int> target(rowVec[current], colVec[current]);
            swaps.push_back(std::pair<std::pair<int, int>, std::pair<int, int> >(source, target));
            a[rowVec[current]][colVec[current]] = a[row][col];
            rowVec[a[row][col]] = rowVec[current];
            colVec[a[row][col]] = colVec[current];
        }
    }


    //for(int row = 1; row <= n; row++){for(int col = 1; col <= c[row]; col++){printf("%d\t", a[row][col]);} puts("");}
    printf("%lu\n", swaps.size());
    for(int p = 0; p < swaps.size(); p++){printf("%d %d %d %d\n", swaps[p].first.first, swaps[p].first.second, swaps[p].second.first, swaps[p].second.second);}


    return 0;
}
