#include <cstdio>

int main(){

    int n, m, min, max; scanf("%d %d %d %d\n", &n, &m, &min, &max);

    bool flagMin(0), flagMax(0), flag(0), possible(1);
    for(int p = 0; p < m; p++){
        int current; scanf("%d", &current);
        if(current == min){flagMin = 1;}
        if(current == max){flagMax = 1;}
        if(current < min || current > max){possible = 0; break;}
    }

    if(!possible || m + !flagMin + !flagMax > n){puts("Incorrect");}
    else{puts("Correct");}

    return 0;
}
