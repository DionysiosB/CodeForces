#include <cstdio>
#include <algorithm>

int main(){

    const long N = 8;
    long x[N], y[N];
    for(long p = 0; p < N; p++){scanf("%ld %ld", x + p, y + p);}

    long rv[N]; for(long p = 0; p < N; p++){rv[p] = p;}
    bool possible(false);
    do{
        long M = N / 2; long dx[M], dy[M];

        for(long p = 0; p < M; p++){dx[p] = x[rv[(p + 1) % M]] - x[rv[p]]; dy[p] = y[rv[(p + 1) % M]] - y[rv[p]];}
        if((dx[0]* dy[2] != dy[0] * dx[2]) || (dx[1] * dy[3] != dy[1] * dx[3]) || (dx[0] * dx[1] + dy[0] * dy[1] != 0) || (dx[0] * dx[0] + dy[0] * dy[0] != dx[1] * dx[1] + dy[1] * dy[1])){continue;}

        for(long p = M; p < N; p++){dx[p - M] = x[rv[M + (p + 1) % M]] - x[rv[p]]; dy[p - M] = y[rv[M + (p + 1) % M]] - y[rv[p]];}
        if((dx[0] * dy[2] != dy[0] * dx[2]) || (dx[1] * dy[3] != dy[1] * dx[3]) || (dx[0] * dx[1] + dy[0] * dy[1] != 0)){continue;}

        possible = true; break;
    }while(std::next_permutation(rv, rv + N));

    if(possible){
        puts("YES");
        for(long p = 0; p < N / 2; p++){printf("%ld ", 1 + rv[p]);}; puts("");
        for(long p = N / 2; p < N; p++){printf("%ld ", 1 + rv[p]);}; puts("");
    }
    else{puts("NO");}

    return 0;
}
