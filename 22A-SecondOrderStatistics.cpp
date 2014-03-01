#include <cstdio>

int main(){

    int temp(0), currentMin(101), secondMin(101);
    int n; scanf("%d", &n);

    while(n--){
        scanf("%d", &temp);
        if(temp < currentMin){secondMin = currentMin; currentMin = temp;}
        else if (currentMin < temp && temp < secondMin){secondMin = temp;}
    }

    if(secondMin == currentMin || secondMin == 101){puts("NO");}
    else{printf("%d\n", secondMin);}

    return 0;
}
