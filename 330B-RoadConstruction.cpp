#include <cstdio>

int main(){
    
    int n(0), m(0); scanf("%d %d\n", &n, &m);

    bool *nodes = new bool[n + 1];
    for(int k = 1; k <= n; k++){nodes[k] = 1;}
    
    int first(0), second(0);
    for(int k = 0; k < m; k++){
        scanf("%d %d\n", &first, &second);
        nodes[first] = nodes[second] = 0;
    }

    int central(0);
    for(int k = 1; k <= n; k++){if(nodes[k] == 1){central = k; break;}}

    printf("%d\n", n - 1);
    for(int k = 1; k <= n; k++){
        if(k == central){continue;}
        printf("%d %d\n", central, k);
    }

    return 0;
}
