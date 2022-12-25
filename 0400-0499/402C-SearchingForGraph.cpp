#include <cstdio>

int main(){

    int t; scanf("%d", &t);
    while(t--){
        int n, p; scanf("%d %d", &n, &p);
        int m = 2 * n + p;
        for(int a = 1; a <= n; a++){
            for(int b = a + 1; b <= n; b++){
                printf("%d %d\n", a, b);
                --m;
                if(m <= 0){break;}
            }
            if(m <= 0){break;}
        }
    }

    return 0;
}
