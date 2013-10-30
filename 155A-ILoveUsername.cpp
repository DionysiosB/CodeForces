#include <cstdio>

int main(){
    int n; scanf("%d\n", &n);
    int newScore; scanf("%d", &newScore); n--;
    int minScore = newScore, maxScore = newScore, amazing = 0;
    while(n--){
        scanf("%d", &newScore);
        if(newScore < minScore){minScore = newScore; amazing++;}
        else if(newScore > maxScore){maxScore = newScore; amazing++;}
    }
    printf("%d\n", amazing);
    return 0;
}
