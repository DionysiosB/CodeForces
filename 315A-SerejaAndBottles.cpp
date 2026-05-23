#include <cstdio>

int main(){

    int n(0); scanf("%d", &n);
    int *present = new int[n];
    int *canOpen = new int[n];

    for(int k = 0; k < n; k++){scanf("%d %d", present + k, canOpen + k);}
    int total(n);
    for(int k = 0; k < n; k++){
        for(int m = 0; m < n; m++){
            if(m == k){continue;}
            if(canOpen[k] == present[m]){--total; present[m] = 0;}
        }
    }
        
    printf("%d\n", total);
    return 0;
}
