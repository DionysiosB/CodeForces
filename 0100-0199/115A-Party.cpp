#include <cstdio>

int main(){

    int n(0); scanf("%d", &n);
    int *sup = new int[n + 1];

    for(int k = 1; k <= n; k++){scanf("%d", sup + k);}

    int total = 0;
    for(int k = 1; k <= n; k++){
        int temp(1), boss(sup[k]);
        while(boss != -1){boss = sup[boss]; ++temp;}
        if(temp > total){total = temp;}
    }

    printf("%d\n", total);

    delete[] sup;
    return 0;
}
