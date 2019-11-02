#include <cstdio>

int main(){

    long n; scanf("%ld\n", &n);
    if(n < 0){n = -n;}
    long sum(0), ans(0), p(1);
    for(p = 1; sum < n; sum += p, p++, ans++);
    long diff = sum - n; 
    if(n == 0){puts("0");}
    else if(diff % 2 == 0){printf("%ld\n", ans);}
    else if((diff + p) % 2 == 0){printf("%ld\n", ans + 1);}
    else{printf("%ld\n", ans + 2);}

    return 0;
}
