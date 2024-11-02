#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        if(n == 1 && k == 1){puts("1 1");}
        else if(k == 1 || k == n){puts("-1");}
        else if(k % 2){printf("3\n1 %ld %ld\n", k - 1, k + 2);}
        else{printf("3\n1 %ld %ld\n", k, k + 1);}
    }

}
