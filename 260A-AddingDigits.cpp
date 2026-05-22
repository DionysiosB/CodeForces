#include <cstdio>

int main(){

    long a,b,n; scanf("%ld %ld %ld", &a, &b, &n);
    bool possible(0);
    a *= 10; for(int k = 0; k < 10; k++){if((a + k)% b == 0){a += k; possible = 1; break;}}
    if(possible){printf("%ld",a); while(--n){printf("0");}; printf("\n");}
    else{puts("-1");}
    return 0;
}
