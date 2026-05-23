#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    int n, m; scanf("%d %d\n", &n, &m); 
    std::vector<std::string> image(n);
    for(int p = 0; p < n; p++){getline(std::cin, image[p]);}

    long count(0);
    for(int row = 0; row < n - 1; row++){
        for(int col = 0; col < m - 1; col++){
            std::vector<char> test; 
            test.push_back(image[row][col]);
            test.push_back(image[row][col + 1]);
            test.push_back(image[row + 1][col]);
            test.push_back(image[row + 1][col + 1]);
            sort(test.begin(), test.end());
            if(test[0] == 'a' && test[1] == 'c' && test[2] == 'e' && test[3] == 'f'){++count;}
        }
    }


    printf("%ld\n", count);

    return 0;
}
