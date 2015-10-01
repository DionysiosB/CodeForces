#include <cstdio>

int main(){

    int n; scanf("%d\n", &n);

    int output(0);
        
    while(n--){
        int p, q; scanf("%d %d\n", &p, &q);
        if(q - p >= 2){++output;}
    }

    printf("%d\n", output);

    return 0;
}
