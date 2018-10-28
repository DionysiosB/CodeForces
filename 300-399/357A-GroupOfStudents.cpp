#include <cstdio>

int main(){
    
    int n(0); scanf("%d", &n);
    int *c = new int[n]; int total(0);
    for(int k = 0; k < n; k++){scanf("%d", c + k); total += c[k];}
    int x(0), y(0); scanf("%d %d", &x, &y);

    int cumsum(0),output(0);
    for(int k = 0; k < n; k++){
        if(x <= cumsum && cumsum <= y && x + cumsum <= total && total <= cumsum + y){output = k; break;}
        cumsum += c[k];
    }

    if(output){printf("%d\n", output + 1);} else{puts("0");}
    return 0;
}
