#include <cstdio>
#include <vector>

int main(){

    int n; scanf("%d\n", &n);
    std::vector<std::vector<long long> > a(n, std::vector<long long>(n, 0));
    int missingRow(-1), missingCol(-1);
    for(int row = 0; row < n; row++){
        for(int col = 0; col < n; col++){
            scanf("%lld", &a[row][col]);
            if(a[row][col] == 0){missingRow = row; missingCol = col;}
        }
    }

    std::vector<long long> rowSum(n, 0);
    std::vector<long long> colSum(n, 0);
    long long diagSum(0), cdiagSum(0);
    for(int row = 0; row < n; row++){
        for(int col = 0; col < n; col++){
            rowSum[row] += a[row][col];
            colSum[col] += a[row][col];
            diagSum += (row == col) * a[row][col];
            cdiagSum += (row + col == n - 1) * a[row][col];
        }
    }

    bool possible(1);
    int checkRow = (missingRow == 0 && n > 1) ? 1 : 0;
    long long checksum = rowSum[checkRow];
    long long x = checksum - rowSum[missingRow];

    if((missingRow == missingCol) * x + diagSum != checksum){possible = 0;}
    if((missingRow + missingCol == n - 1) * x + cdiagSum != checksum){possible = 0;}

    for(int row = 0; row < n; row++){
        if(!possible){break;}
        if(row != missingRow && rowSum[row] != checksum){possible = 0; break;}
    }

    if(colSum[missingCol] + x != checksum){possible = 0;}
    for(int col = 0; col < n; col++){
        if(!possible){break;}
        if(col != missingCol && colSum[col] != checksum){possible = 0; break;}
    }

    if(n == 1){x = 1;}
    else if(x <= 0){possible = 0;}

    printf("%lld\n", possible ? x : -1);

    return 0;
}
