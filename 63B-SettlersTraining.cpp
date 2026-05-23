#include <cstdio>

int main(){

    int n(0), k(0); scanf("%d %d", &n, &k);
    int *rank = new int[n];
    for(int p = 0; p < n; p++){scanf("%d", rank + p);}

    long coins(0);
    while(rank[0] < k){
        for(int p = 0; p < n; p++){
            if(rank[p] == k){break;}
            else if((p == n - 1) || (rank[p] < rank[p + 1])){++rank[p];}
        }
        ++coins;
    }

    printf("%ld\n", coins);

    delete[] rank;
    return 0;
}
