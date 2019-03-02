#include <cstdio>

int main(){

    long n; scanf("%ld",&n);
    if(n == 2){puts("-1");}
    else{printf("6\n10\n15\n"); for(long p = 3; p < n; p++){printf("%ld\n",6 * p);}}

    return 0;
}
