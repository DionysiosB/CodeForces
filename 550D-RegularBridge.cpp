#include<cstdio>

int main(){

    long k; scanf("%ld", &k);
    if(k & 1){
        puts("YES");
        if(k==1){printf("2 1\n1 2\n");}
        else{
            printf("%ld %ld\n", 2 * (k + 2), k * (k + 2));
            printf("1 %ld\n", k+3);
            for(long p = 1; p <= k + 2; p++){
                for(long q = 1;q <= k; q++){
                    if((p % 2 == 0 || q != 1) && (p + q - 1)%(k + 2) + 1 > p){printf("%ld %ld\n%ld %ld\n", p , (p + q - 1) % (k + 2) + 1, p + k + 2, (p + q - 1) % (k + 2) + k + 3);}
                }
            }
        }
    }
    else{puts("NO");}

    return 0;
}
