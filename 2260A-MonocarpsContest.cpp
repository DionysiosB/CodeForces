#include <cstdio>

int main(){

    int t; scanf("%d", &t);
    while(t--){
        int n; scanf("%d", &n);
        int x(0); scanf("%d", &x);
        int ends(1 - x), total(0);
        while(--n){scanf("%d", &x); total += (1 - x);}
        total -= (1 - x); ends += (1 - x);
        if(total + ends < 2){puts("-1");}
        else{printf("%d\n", 2 - ends);}
    }

    return 0;
}
