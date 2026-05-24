#include <cstdio>

int main(){

    long k; scanf("%ld", &k);
    if(k <= 0){puts("1");}
    if(k > 18 * 2){puts("-1");}
    else{
        for(long p = 0; p < k/2; p++){printf("8");}
        if(k & 1){printf("9");}
        puts("");
    }

    return 0;
}
