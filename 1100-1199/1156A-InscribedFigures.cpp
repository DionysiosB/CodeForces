#include <cstdio>

int main(){

    long n; scanf("%ld", &n);
    long cnt(0);
    long prev(-1), pprev(-1);
    for(long p = 0; p < n; p++){
        long a; scanf("%ld", &a);
        if((a == prev) || (a == 2 && prev == 3) || (a == 3 && prev == 2)){cnt = -1; break;}
        if((a == 1 && prev == 2) || (a == 2 && prev == 1)){cnt += 3;}
        if((a == 1 && prev == 3) || (a == 3 && prev == 1)){cnt += 4;}
        if(a == 2 && prev == 1 && pprev == 3){cnt -= 1;}
        pprev = prev; prev = a;
    }

    if(cnt < 0){puts("Infinite");}
    else{printf("Finite\n%ld\n", cnt);}

    return 0;
}
