#include <cstdio>

void f(int n, int *perm){
    if(n <= 1){return;}
    f(n - 1, perm);
    int temp = perm[n - 1]; perm[n - 1] = perm[n]; perm[n] = temp;
}


int main(){
    int n; scanf("%d", &n);
    int *array = new int[n + 1];
    for(int k = 1; k <= n; k++){array[k] =  k;}
    f(n, array);
    for(int k = 1; k <=n; k++){printf("%d ", array[k]);}; printf("\n");
    delete[] array;
    return 0;
}
