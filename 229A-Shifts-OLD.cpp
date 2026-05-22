#include <cstdio>
#include <iostream>
#include <vector>

int main(){

    long n, m; scanf("%ld %ld\n", &n, &m);
    std::vector<std::string> matrix(n);

    for(int k = 0; k < n; k++){getline(std::cin, matrix[k]);}

    long colMin = 1e5;
    bool possible(1);
    for(long col = 0; col < m; col++){
        if(!possible){break;}
        long total = 0;

        for(long row = 0; row < n; row++){
            if(matrix[row][col] == '1'){continue;}

            long rowMin = m;

            for(long p = 1; p < m; p++){if(matrix[row][(m + col + p) % m] == '1'){rowMin = p; break;}}
            for(long p = 1; p < m; p++){if(matrix[row][(m + col - p) % m] == '1'){rowMin = (rowMin < p) ? rowMin : p; break;}}

            if(rowMin < m){total += rowMin;}
            else{possible = 0; break;}
        }

        if(total < colMin){colMin = total;}

    }

    if(possible){printf("%ld\n", colMin);}
    else{puts("-1");}

    return 0;
}
