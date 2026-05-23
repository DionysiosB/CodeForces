#include <cstdio>
#include <iostream>

bool checkGoodNumber(long input, int k){

    bool digits[10] = {0};
    while(input > 0){digits[input%10] = 1; input /= 10;}

    bool output(1);
    for(int d = 0; d <= k; d++){if(digits[d] == 0){output = 0; break;}}
    return output;
}


int main(){

    int n(0), k(0); scanf("%d %d", &n, &k);

    int count(0); long temp(0);
    for(int p = 0; p < n; p++){scanf("%ld", &temp); count += checkGoodNumber(temp, k);}

    printf("%d\n", count);

    return 0;
}
