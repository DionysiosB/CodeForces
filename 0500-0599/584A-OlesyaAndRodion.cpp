#include <cstdio>

int main(){

    int n, t; scanf("%d %d\n", &n, &t);

    if(t == 10){
        if(n == 1){puts("-1");}
        else{printf("1"); for(int p = 0; p < n - 1; p++){printf("0");}}
    }
    else{for(int p = 0; p < n; p++){printf("%d", t);}}

    return 0;
}
