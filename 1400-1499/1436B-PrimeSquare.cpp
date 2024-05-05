#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        if(n == 2){puts("4 1\n1 4"); continue;}
        for(long row = 0; row < n; row++){
            for(long col = 0; col < n; col++){
                if(col == row){printf("4 ");}
                else if(col == (row + 1) % n){printf("1 ");}
                else{printf("0 ");}
            }
            puts("");
        }
    }

    return 0;
}
