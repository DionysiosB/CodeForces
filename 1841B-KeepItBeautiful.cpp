#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long first; scanf("%ld", &first); printf("1");
        long cur(first); bool drop(false);
        for(long p = 1; p < n; p++){
            long x; scanf("%ld", &x);
            if(!drop && x >= cur){printf("1"); cur = x;}
            else if(!drop){
                if(x <= first){printf("1"); drop = true; cur = x;}
                else{printf("0");}
            }
            else if(drop){
                if(cur <= x && x <= first){printf("1"); cur = x;}
                else{printf("0");}
            }
        }

        puts("");
    }

}
