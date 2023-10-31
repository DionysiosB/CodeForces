#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        int n, k; scanf("%d %d", &n, &k);
        int md(0), even(0); bool div(false);
        for(int p = 0; p < n; p++){
            int x; scanf("%d", &x);
            x %= k;
            if(x){md = (md > x) ? md : x;}
            else{div = true;}
            if(x == 2){++even;}
        }

        if(div){puts("0");}
        else if(k == 4){
            if(even >= 2){puts("0");}
            else if(even >= 1 || md == 3){puts("1");}
            else{puts("2");}
        }
        else{printf("%d\n", k - md);}
    }

}
