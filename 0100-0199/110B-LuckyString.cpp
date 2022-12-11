#include <cstdio>

int main(){

    long n(0); scanf("%ld", &n);
    for(int k = 0; k < n ; k++){
        if(k % 4 == 0){printf("a");}
        else if(k % 4 == 1){printf("b");}
        else if(k % 4 == 2){printf("c");}
        else if(k % 4 == 3){printf("d");}
    }
    printf("\n");
}
