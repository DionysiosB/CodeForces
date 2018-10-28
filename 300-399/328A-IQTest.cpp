#include <cstdio>
#include <math.h>


int main(){

    int input[4] = {0};
    for(int k = 0; k < 4; k++){scanf("%d\n", input + k);}

    int diff = input[1] - input[0];
    double ratio = 1.0 * input[1] / input[0], intpart(0);

    if(input[2] - input[1] == diff && input[3] - input[2] == diff){printf("%d\n", input[3] + diff);}
    else if(1.0 * input[2] / input[1] == ratio && 1.0 * input[3] / input[2] == ratio && modf(ratio * input[3], &intpart) == 0.0){printf("%.0lf\n", input[3] * ratio);}
    else{puts("42");}
    return 0;
}
