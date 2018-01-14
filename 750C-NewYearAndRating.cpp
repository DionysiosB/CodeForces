#include <cstdio>

int main(){

    const long M = 1e9;
    const long B = 1900;
    long n; scanf("%ld", &n);
    long startMin(-M), startMax(M), totalDiff(0);
    while(n--){
        long c, d; scanf("%ld %ld", &c, &d);
        if((d == 1) && (startMin + totalDiff < B)){startMin = B - totalDiff;}
        if((d == 2) && (startMax + totalDiff >= B)){startMax = B - 1 - totalDiff;}
        totalDiff += c;
    }

    if(startMin > startMax){puts("Impossible");}
    else if(startMax >= M){puts("Infinity");}
    else{printf("%ld\n", startMax + totalDiff);}

    return 0;
}
