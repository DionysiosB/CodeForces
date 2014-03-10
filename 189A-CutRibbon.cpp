#include <cstdio>

int main(){

    int n(0), a(0), b(0), c(0); scanf("%d %d %d %d", &n, &a, &b, &c);
    int *array = new int[n + 1];
    for(int k = 0; k <= n; k++){array[k] = 0;}
    if(a <= n){array[a] = 1;}
    if(b <= n){array[b] = 1;}
    if(c <= n){array[c] = 1;}

    for(int k = 1; k <= n; k++){
        if(k > a && array[k - a] > 0 && array[k] < array[k - a] + 1){array[k] = array[k - a] + 1;} 
        if(k > b && array[k - b] > 0 && array[k] < array[k - b] + 1){array[k] = array[k - b] + 1;} 
        if(k > c && array[k - c] > 0 && array[k] < array[k - c] + 1){array[k] = array[k - c] + 1;} 
    }

    printf("%d\n", array[n]);
    return 0;
}
