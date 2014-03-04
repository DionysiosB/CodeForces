#include <cstdio>
#include <algorithm>

int main(){

    int n(0), m(0); scanf("%d %d", &n, &m);
    int *puzzles = new int[m];
    for(int k = 0; k < m; k++){scanf("%d", puzzles + k);}
    std::sort(puzzles, puzzles + m);

    int output(10001);
    for(int k = 0; k <= m - n; k++){
        int diff =  puzzles[k + n - 1] - puzzles[k];
        if(diff < output){output = diff;} 
    }
    printf("%d\n", output);
    return 0;
}
