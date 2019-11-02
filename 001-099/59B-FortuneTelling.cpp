#include <cstdio>

int main(){

    int n(0); scanf("%d", &n);

    int temp(0), total(0), minOdd(101), numOdds(0);
    for(int k = 0; k < n; k++){
        scanf("%d", &temp);
        total += temp;
        if(temp % 2 == 1){++numOdds; if(temp < minOdd){minOdd = temp;}}
    }

    if(minOdd > 100){puts("0");}
    else if(numOdds % 2 == 0){printf("%d\n", total - minOdd);}
    else if(numOdds % 2 == 1){printf("%d\n", total);}

    return 0;
}
