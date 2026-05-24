#include<cstdio>

int main(){

    long n, w, v, u; scanf("%ld %ld %ld %ld", &n, &w, &v, &u);
    double minTime(1e9), maxTime(0);
    for(long p = 0; p < n; p++){
        long x, y; scanf("%ld %ld", &x, &y); 
        double timeDiff = 1.0 * x / v - 1.0 * y / u;
        minTime = (minTime < timeDiff) ? minTime : timeDiff;
        maxTime = (maxTime > timeDiff) ? maxTime : timeDiff;
    }

    double timeToCross = 1.0 * w / u;
    if(minTime < 0){timeToCross += maxTime;}
    printf("%.7lf\n", timeToCross);

    return 0;
}
