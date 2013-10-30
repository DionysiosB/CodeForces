#include <cstdio>

int main(){
    int n; scanf("%d", &n);
    const int types = 3;
    int exercise[types] = {0}; int temp = 0;
    for(int k = 0; k < n; k++){scanf("%d", &temp);exercise[k % types] += temp;}
    if(exercise[0] > exercise[1] && exercise[0] > exercise[2]){printf("chest\n");}
    else if (exercise[1] > exercise[2]){printf("biceps\n");}
    else {printf("back\n");}
    return 0;
}
