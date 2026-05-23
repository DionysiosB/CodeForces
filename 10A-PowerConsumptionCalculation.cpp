#include <cstdio>

int main(){

    int n(0), P1(0), P2(0), P3(0), T1(0), T2(0);
    scanf("%d %d %d %d %d %d", &n, &P1, &P2, &P3, &T1, &T2);

    long total(0), previousTime(-1);

    for(int k = 0; k < n; k++){

        int start(0), finish(0); scanf("%d %d", &start, &finish);
        if(previousTime < 0){previousTime = start;}
        total += P1 * (finish - start);

        int timeIdle = start - previousTime;
        if(timeIdle > T1 + T2){total += (timeIdle - T1 - T2) * P3; timeIdle = T1+ T2;}
        if(timeIdle > T1){total += (timeIdle - T1) * P2; timeIdle = T1;}
        total += timeIdle * P1;

        previousTime = finish;
    }

    printf("%ld\n", total);

    return 0;
}
