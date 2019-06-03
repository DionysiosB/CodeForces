#include <cstdio>

int main(){

    long n; scanf("%ld", &n);
    if(n < 6){puts("-1");}
    else{
        printf("1 2\n1 3\n1 4\n2 5\n2 6\n");
        for(long p = 7; p <= n; p++){printf("%d %ld\n", (p % 2 ? 1 : 2), p);}
    }

    for(long p = 2; p <= n; p++){printf("1 %ld\n", p);}

    return 0;
}
