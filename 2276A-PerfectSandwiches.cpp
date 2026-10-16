#include <cstdio>

int main(){

    int t; scanf("%d", &t);
    while(t--){
        int a, b; scanf("%d %d", &a, &b);
        if(a <= b){puts("-1");}
        else if(a >= 2 * b){printf("%d\n", b);}
        else{printf("%d\n", a - b);}
    }

}
