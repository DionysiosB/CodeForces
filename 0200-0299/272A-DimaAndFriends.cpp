#include <cstdio>

int main(){
    int n; scanf("%d", &n);
    int fingers = 0, sum = 0, output = 0;
    for(int k = 0; k < n ; k++){scanf("%d", &fingers); sum += fingers;}
    for(int k = 1; k <= 5; k++){if((sum + k) % (n + 1) != 1){output++;}}
    printf("%d\n",output);
    return 0;
}
