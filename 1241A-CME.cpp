#include <cstdio>

int main(){

    long q; scanf("%ld", &q);
    while(q--){
        long n; scanf("%ld", &n);
        if(n <= 4){printf("%ld\n", 4 - n);}
        else{puts(n % 2 ? "1" : "0");}
    }

    return 0;
}
