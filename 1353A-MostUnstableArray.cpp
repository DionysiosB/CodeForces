#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m; scanf("%ld %ld", &n, &m);
        if(n <= 1){puts("0");}
        else if(n <= 2){printf("%ld\n", m);}
        else{printf("%ld\n", 2 * m);}
    }

    return 0;
}
