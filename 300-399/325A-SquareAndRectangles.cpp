#include <cstdio>

int main(){
    
    const long upperBound = 32000;

    long n; scanf("%ld\n", &n);
    long array[n][4];
    long minX(32000), minY(32000), maxX(0), maxY(0), area(0);

    for (long p = 0; p < n; ++p){
        scanf("%ld %ld %ld %ld\n", &array[p][0], &array[p][1], &array[p][2], &array[p][3]);
        if(array[p][0] < minX){minX = array[p][0];}
        if(array[p][1] < minY){minY = array[p][1];}
        if(array[p][2] > maxX){maxX = array[p][2];}
        if(array[p][3] > maxY){maxY = array[p][3];}
        area += (array[p][3] - array[p][1]) * (array[p][2] - array[p][0]);
    }

    if(maxX - minX == maxY - minY && (maxX - minX) * (maxY - minY) == area){puts("YES");}
    else{puts("NO");}

    return 0;
}
