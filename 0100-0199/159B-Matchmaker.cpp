#include <cstdio>
#include <vector>
#include <iostream>


int main(){

    const int N = 1000;
    int n(0), m(0); scanf("%d %d", &n, &m);

    std::vector<std::vector<int> > markers(N + 1, std::vector<int>(N + 1, 0));
    std::vector<std::vector<int> > caps(N + 1, std::vector<int>(N + 1, 0));
    for(int row = 0; row <= N; row++){
        for(int col = 0; col <= N; col++){
            markers[row][col] = caps[row][col] = 0;
        }
    }

    std::vector<int> markerSizes(N + 1, 0);
    std::vector<int> capSizes(N + 1, 0);
    for(int k = 0; k <= N; k++){markerSizes[k] = capSizes[k] = 0;}

    for(int k = 0; k < n; k++){
        int currentColor, currentSize; scanf("%d %d", &currentColor, &currentSize);
        ++markerSizes[currentSize]; ++markers[currentSize][currentColor];
    }
    for(int k = 0; k < m; k++){
        int currentColor, currentSize; scanf("%d %d", &currentColor, &currentSize);
        ++capSizes[currentSize]; ++caps[currentSize][currentColor];
    }


    long totalMatching(0), beautifulMatching(0);
    for(int k = 1; k <= N; k++){totalMatching += std::min(markerSizes[k], capSizes[k]);}
    for(int row = 1; row <= N; row++){
        for(int col = 1; col <= N; col++){
            beautifulMatching += std::min(markers[row][col], caps[row][col]);
        }
    }


    std::cout << totalMatching << " " << beautifulMatching << std::endl;

    return 0;
}
