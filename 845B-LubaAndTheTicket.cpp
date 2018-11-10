#include <cstdio>
#include <iostream>
#include <vector>


bool isLucky(long x){
    int suma(0); for(long p = 0; p < 3; p++){suma += x % 10; x /= 10;}
    int sumb(0); for(long p = 0; p < 3; p++){sumb += x % 10; x /= 10;}
    return (suma == sumb);
}

int getDist(long a, long b){
    int count(0);
    for(long p = 0; p < 6; p++){count += ((a % 10) != (b % 10)); a /= 10; b /= 10;}
    return count;
}

int main(){

    long t; scanf("%ld", &t);
    int minDist(10);
    for(long p = 0; p < 1000000; p++){
        if(!isLucky(p)){continue;}
        int dist = getDist(p, t);
        minDist = (dist < minDist) ? dist : minDist;
    }

    printf("%d\n", minDist);

    return 0;
}
