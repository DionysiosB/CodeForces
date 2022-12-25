#include <cstdio>

int main(){

    const int F = 4;
    const int N = 65;

    long a[2 * N][2 * N] = {0};
    long t(0);
    scanf("%ld %ld", &a[N][N], &t);

    bool done(false);
    while(!done){
        done = true;
        for(long x = 1; x < 2 * N - 1; x++){
            for(long y = 1; y < 2 * N - 1; y++){
                if(a[x][y] < F){continue;}
                done = false;
                a[x+1][y] += a[x][y] / F;
                a[x-1][y] += a[x][y] / F;
                a[x][y+1] += a[x][y] / F;
                a[x][y-1] += a[x][y] / F;
                a[x][y] %= F;
            }
        }
    }

    while(t--){
        long x, y; scanf("%ld %ld",&x, &y);
        if(x < -N || x >= N || y < -N || y >= N){puts("0");}
        else{printf("%ld\n", a[N+x][N+y]);}
    }

    return 0;
}
