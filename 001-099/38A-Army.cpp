#include <cstdio>

int main(){
    int n; scanf("%d",&n);
    int *years = new int[n + 1];
    years[0] = years[1] = 0;
    int temp(0), currentRank(0), futureRank(0);
    for(int k = 2; k <= n; k++){scanf("%d", &temp); years[k] = years[k - 1] + temp;}
    scanf("%d %d", &currentRank, &futureRank); 
    printf("%d", years[futureRank] - years[currentRank]);
    return 0;
}
