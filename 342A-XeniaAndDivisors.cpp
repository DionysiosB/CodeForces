#include <cstdio>

int main(){

    long n(0); scanf("%ld\n", &n);
    long x[8] = {0};
    int temp(0); for(long k = 0; k < n; k++){scanf("%d", &temp); ++x[temp];}
    if(x[5] > 0 || x[7] > 0 || x[1] != n/3 || x[2] < x[4] || x[6] != x[2] + x[3] - x[4]){puts("-1");}
    else{
        for(long k = 0; k < x[4]; k++){puts("1 2 4");}
        for(long k = 0; k < x[2] - x[4]; k++){puts("1 2 6");}
        for(long k = 0; k < x[3]; k++){puts("1 3 6");}
    }
    
    return 0;
}
