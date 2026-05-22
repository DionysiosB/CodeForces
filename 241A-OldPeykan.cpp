#include <cstdio>

int main(){

    int m(0), k(0); scanf("%d %d", &m, &k);
    int *distance = new int[m];
    int *refill = new int[m];

    for(int p = 0; p < m; p++){scanf("%d", distance + p);}
    for(int p = 0; p < m; p++){scanf("%d", refill + p);}

    long fuel(0), time(0), maxSoFar(0);

    for(int p = 0; p < m; p++){
        fuel += refill[p];
        time += distance[p];
        if(refill[p] > maxSoFar){maxSoFar = refill[p];}
        if(fuel < distance[p]){
            long diff = distance[p] - fuel;
            long w = diff / maxSoFar; if(diff % maxSoFar){++w;}
            time += w * k;
            fuel += w * maxSoFar;
        }
        fuel -= distance[p];
    } 
    printf("%ld\n", time);

    return 0;
}
