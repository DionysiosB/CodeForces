#include <cstdio>

int main(){

    int n; scanf("%d\n", &n);
    
    if(n <= 2){printf("1\n1\n");}
    else if(n == 3){printf("2\n1 3\n");}
    else{
        printf("%d\n", n);
        for(int p = 2; p <= n; p += 2){printf("%d ", p);}
        for(int p = 1; p <= n; p += 2){printf("%d ", p);}
    }


    return 0;
}
