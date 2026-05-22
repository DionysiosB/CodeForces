#include <cstdio>

int main(){

    int n(0); scanf("%d", &n);

    long long *points = new long long[n]; 
    for(int k = 0; k < n; k++){scanf("%lld", points + k);}

    const int N = 5; long long cost[N] = {0};
    for(int k = 0; k < N; k++){scanf("%lld", cost + k);}

    long long currentPoints(0); 
    long long prizes[N] = {0};
    for(int k = 0; k < n; k++){
        currentPoints += points[k];
        for(int k = N - 1; k >= 0; k--){
            prizes[k] += (currentPoints / cost[k]); 
            currentPoints %= cost[k];
        }
    }

    for(int k = 0; k < N; k++){printf("%lld ", prizes[k]);}
    printf("\n%lld\n", currentPoints);

    return 0;
}
