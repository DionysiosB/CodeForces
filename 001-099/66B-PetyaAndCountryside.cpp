#include <cstdio>

int main(){

    int n(0); scanf("%d", &n);
    int *heights = new int[n];
    int *scores = new int[n];
    for(int k = 0; k < n; k++){scanf("%d", heights + k); scores[k] = 0;}

    int below(0);
    for(int k = 1; k < n; k++){
        if(heights[k - 1] <= heights[k]){scores[k] += ++below;}
        else{below = 0;}
    }
    
    below = 0;
    for(int k = n - 2; k >= 0; k--){
        if(heights[k] >= heights[k + 1]){scores[k] += ++below;}
        else{below = 0;}
    }

    int maxScore(0);
    for(int k = 0; k < n; k++){if(scores[k] > maxScore){maxScore = scores[k];}}
    printf("%d\n", maxScore + 1);
    return 0;
}
