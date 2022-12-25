#include <cstdio>
#include <vector>

int main(){

    int m, n; scanf("%d %d\n", &m, &n);

    std::vector<std::vector<int> > A(m, std::vector<int>(n, 1));
    std::vector<std::vector<int> > B(m, std::vector<int>(n, 0));

    for(int row = 0; row < m; row++){
        for(int col = 0; col < n; col++){
            scanf("%d", &B[row][col]);
        }
    }

    for(int bRow = 0; bRow < m; bRow++){
        for(int bCol = 0; bCol < n; bCol++){
            if(B[bRow][bCol] == 0){
                for(int aRow = 0; aRow < m; aRow++){A[aRow][bCol] = 0;}
                for(int aCol = 0; aCol < n; aCol++){A[bRow][aCol] = 0;}
            }
        }
    }

    bool possible = 1;

    for(int bRow = 0; bRow < m; bRow++){
        if(!possible){break;}
        for(int bCol = 0; bCol < n; bCol++){
            if(!possible){break;}
            if(B[bRow][bCol] == 1){
                bool isValid = 0;
                for(int aRow = 0; aRow < m; aRow++){if(A[aRow][bCol] == 1){isValid = 1; break;}}
                if(isValid){continue;}
                for(int aCol = 0; aCol < n; aCol++){if(A[bRow][aCol] == 1){isValid = 1; break;}}
                if(!isValid){possible = 0;}
            }
        }
    }

    if(!possible){puts("NO");}
    else{
        puts("YES");
        for(int aRow = 0; aRow < m; aRow++){
            for(int aCol = 0; aCol < n; aCol++){
                printf("%d ", A[aRow][aCol]);
            }
            puts("");
        }
    }

    return 0;
}
