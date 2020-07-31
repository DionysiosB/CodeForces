#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        if(n <= 30){puts("NO");}
        else if(n == 36 || n == 40 || n == 44){printf("YES\n6 10 15 %ld\n", n - 31);}
        else{printf("YES\n6 10 14 %ld\n", n - 30);}
    }

    return 0;
}
