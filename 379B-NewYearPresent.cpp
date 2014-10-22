#include <cstdio>

int main(){

    int n(0); scanf("%d", &n);

    int money(0); 
    
    scanf("%d", &money);
    for(int k = 0; k < money; k++){printf("PRL");}; printf("R");
    for(int p = 1; p < n; p++){
        scanf("%d", &money);
        for(int k = 0; k < money; k++){printf("PLR");}
        if(p < n - 1){printf("R");}
    }

    return 0;
}
