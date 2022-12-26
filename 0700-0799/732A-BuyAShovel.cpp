#include <cstdio>

int main(){

    const int D = 10;
    int k, r; scanf("%d %d", &k, &r);
    for(int p = 1; p <= D; p++){
        int u = p * k; 
        if((u % D == 0) || (u % D == r)){printf("%d\n", p); break;}
    }

    return 0;
}
