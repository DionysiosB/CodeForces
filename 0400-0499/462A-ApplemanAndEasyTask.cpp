#include <cstdio>
#include <iostream>
#include <string>
#include <vector>


int main(){

    int n; scanf("%d\n", &n);
    std::vector<std::string> checkboard(n);
    for(int p = 0; p < n; p++){getline(std::cin, checkboard[p]);}

    bool allEven(1);

    for(int row = 0; row < n; row++){
        if(!allEven){break;}
        for(int col = 0; col < n; col++){
            int adjacent = 0;
            if(row > 0 && checkboard[row - 1][col] == 'o'){++adjacent;}
            if(row < n - 1 && checkboard[row + 1][col] == 'o'){++adjacent;}
            if(col > 0 && checkboard[row][col - 1] == 'o'){++adjacent;}
            if(col < n - 1 && checkboard[row][col + 1] == 'o'){++adjacent;}

            if(adjacent % 2 > 0){allEven = false; break;}
        }
    }

    puts(allEven ? "YES" : "NO");

    return 0;
}
