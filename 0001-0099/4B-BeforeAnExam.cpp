#include <cstdio>

int main(){

    int numDays(0), totalTime(0); scanf("%d %d", &numDays, &totalTime);
    int *minTime   = new int[numDays];
    int *maxTime   = new int[numDays];
    int *studyTime = new int[numDays];

    int totalMinTime(0), totalMaxTime(0);
    for(int k = 0; k < numDays; k++){
        scanf("%d %d", minTime + k, maxTime + k);
        totalMinTime += minTime[k];
        totalMaxTime += maxTime[k];
    }

    if(totalMinTime <= totalTime && totalTime <= totalMaxTime){
        for(int k = 0; k < numDays; k++){studyTime[k] = minTime[k]; totalTime -= minTime[k];}
        for(int k = 0; k < numDays; k++){
            if(maxTime[k] - minTime[k] < totalTime){studyTime[k] = maxTime[k]; totalTime -= (maxTime[k] - minTime[k]);}
            else{studyTime[k] += totalTime; break;}
        }

        puts("YES");
        for(int k = 0; k < numDays; k++){printf("%d ",studyTime[k]);}
        printf("\n");
    }
    else{puts("NO");}
    
    return 0;
}
