#include <cstdio>

int main(){
    int n; scanf("%d", &n);
    int *count = new int[n];
    int sum = 0, output = 0;
    for(int k = 0; k < n; k++){scanf("%d", count + k); sum += count[k];}
    int sumMod = sum % 2;
    for(int k = 0; k < n; k++){if(count[k] % 2 == sumMod){output++;}}
    printf("%d\n", output);
    return 0;
}
