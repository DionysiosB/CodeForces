#include <cstdio>
#include <algorithm>

int main(){
    int N; scanf("%d", &N);
    int *length = new int[N];
    for(int k = 0; k < N; k++){scanf("%d", length + k);}
    std::sort(length, length + N);
    int numTowers = 0, currentLength = 0, currentHeight = 1, maxHeight = 1;
    for(int k = 0; k < N; k++){
        if(length[k] == currentLength){currentHeight++; if(currentHeight > maxHeight){maxHeight = currentHeight;}}
        else{currentLength = length[k]; currentHeight = 1; numTowers++;}
    }
    printf("%d %d\n", maxHeight, numTowers);
    return 0;
}
