#include <cstdio>

int main(){

    const int n = 5;
    int sum = 0;
    for(int p = 0; p < n; p++){int temp; scanf("%d", &temp); sum += temp;}

    if(sum > 0 && sum % n == 0){printf("%d\n", sum / n);}
    else{puts("-1");}

    return 0;
}
