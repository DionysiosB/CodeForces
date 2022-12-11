#include <cstdio>

int main(){

    int n, x0; scanf("%d %d\n", &n, &x0);
    int m(0), M(1001);

    while(n--){
        int a, b; scanf("%d %d\n", &a, &b);
        if(a > b){int temp(a); a = b; b = temp;}
        if(b < M){M = b;}
        if(a > m){m = a;}
    }

    if(m > M){puts("-1");}
    else{
        int ans = 1001;
        if(m <= x0 && x0 <= M){ans = 0;}
        if(x0 < m && ans > m - x0){ans = m - x0;}
        if(x0 > M && ans > x0 - M){ans = x0 - M;}
        printf("%d\n", ans);
    }

    return 0;
}
