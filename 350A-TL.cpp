#include <cstdio>

int main(){

    int n(0), m(0); scanf("%d %d", &n, &m);

    int correctMax(0), correctMin(100), temp(0);
    bool possible(1);

    while(n--){
        scanf("%d", &temp);
        if(temp > correctMax){correctMax = temp;}
        if(temp < correctMin){correctMin = temp;}
    }

    while(m--){scanf("%d", &temp); if(temp <= correctMax || temp <= 2 * correctMin){possible = 0; break;}}


    if(correctMax < 2 * correctMin){temp = 2 * correctMin;}
    else{temp = correctMax;}

    if(possible){printf("%d\n", temp);}
    else{puts("-1");}

    return 0;
}
