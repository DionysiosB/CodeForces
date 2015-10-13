#include <cstdio>

int main(){

    long n; scanf("%ld\n", &n);
    if(n < 4){puts("NO");}
    else if(n % 2 == 0){
        puts("YES");
        puts("1 * 2 = 2");
        puts("2 * 3 = 6");
        puts("6 * 4 = 24");
        for(long p = 6; p <= n; p += 2){
            printf("%ld - %ld = 1\n", p, p - 1);
            puts("24 * 1 = 24");
        }
    }
    else if(n % 2 == 1){
        puts("YES");
        puts("1 + 5 = 6");
        puts("4 * 6 = 24");
        puts("3 - 2 = 1");
        puts("1 * 24 = 24");
        for(long p = 7; p <= n; p += 2){
            printf("%ld - %ld = 1\n", p, p - 1);
            puts("24 * 1 = 24");
        }
    }

    return 0;
}
