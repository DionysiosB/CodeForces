#include <cstdio>
#include <vector>

int main(){

    const int MAX = 300;
    const int INTERVAL = 5 * MAX + 2;
    const int LAG = MAX + 1;

    int m, t, r; scanf("%d %d %d\n", &m, &t, &r);
    if(t < r){puts("-1"); return 0;}

    long total(0);
    std::vector<int> numCandles(INTERVAL, 0);
    std::vector<bool> fire(INTERVAL, 0);
    while(m--){
        int w; scanf("%d", &w);
        if(numCandles[LAG + w] >= r){continue;}
        int candlesNeeded = r - numCandles[LAG + w];
        total += candlesNeeded;

        int time(LAG + w - 1);
        while(candlesNeeded){
            if(fire[time]){--time; continue;}
            fire[time] = true;
            candlesNeeded--;
            for(int u = time + 1; u <= time + t; u++){++numCandles[u];}
        }
    }

    printf("%ld\n", total);

    return 0;
}
