#include <cstdio>

int countLuckyDigits(long number){
    int count = 0, temp = 0;
    while(number > 0){
        temp = number % 10;
        if(temp == 4 || temp == 7){count++;}
        number /= 10;
    }
    return count;
}


int main(){
    int n, k; scanf("%d %d", &n, &k);
    long temp; int output = 0;
    for(int u = 0; u < n; u++){scanf("%ld", &temp);if(countLuckyDigits(temp) <= k){output++;}}
    printf("%d", output);
    return 0;
}
