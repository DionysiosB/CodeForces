#include <cstdio>
#include <iostream>
#include <vector>
#include <set>
#include <string>

int main(){

    int n, m; scanf("%d %d\n", &n, &m);
    std::vector<std::string> matrix(n);
    for(int p = 0; p < n; p++){std::cin >> matrix[p];}

    int output = 0;
    std::set<int> remaining; 
    for(int p = 0; p < n - 1; p++){remaining.insert(p);}

    for(int col = 0; col < m; col++){
        int valid = 1;
        for(int row = 0; row < n - 1; row++){
            if(remaining.find(row) == remaining.end()){continue;}
            if(matrix[row][col] > matrix[row + 1][col]){valid = 0; ++output; break;}
        }
        if(valid){
            for(int row = 0; row < n - 1; row++){if(matrix[row][col] < matrix[row + 1][col]){remaining.erase(row);}}
        }
        if(remaining.size() == 0){break;}
    }

    std::cout << output << std::endl;

    return 0;
}
