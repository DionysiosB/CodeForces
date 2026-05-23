#include <cstdio>

int main(){

    int n(0), m(0), k(0); scanf("%d %d %d", &n, &m, &k);

    int temp(0), numFirst(0), numSecond(0);
    for(int p = 0; p < n; p++){
        scanf("%d", &temp);
        if(temp == 1){++numFirst;} else{++numSecond;}
    }

    int needed(0); 
    if(numFirst >= m){needed = numFirst - m; m = 0;} else{m -= numFirst;}
    if(numSecond > k + m){needed += numSecond - k - m;}

    printf("%d\n", needed);

    return 0;
}
