#include <cstdio>

int main(){

    int n(0), p(0), k(0); scanf("%d %d %d", &n, &p, &k);

    if(p - k > 1){printf("<< ");}
    for(int u = p - k; u <= p + k; u++){
        if(u == p){printf("(%d) ", p);}
        else if(1 <= u && u <= n){printf("%d ", u);}
    }
    if(p + k < n){printf(">>");}
    puts("");

    return 0;
}
