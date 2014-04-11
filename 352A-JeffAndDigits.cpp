#include <cstdio>

int main(){

    int n(0); scanf("%d\n", &n);
    int input(0), zeroes(0), fives(0);

    while(n--){
        scanf("%d", &input); 
        if(input == 0){++zeroes;}
        else if(input == 5){++fives;}
    }

    if(fives >= 9 && zeroes > 0){
        for(int k = 0; k < fives / 9; k++){printf("555555555");}
        for(int k = 0; k < zeroes; k++){printf("0");}
        printf("\n");
    }
    else if (zeroes > 0){puts("0");}
    else{puts("-1");}

    return 0;
}
