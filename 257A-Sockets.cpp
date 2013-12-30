#include <cstdio>
#include <algorithm>

int main(){

    int n, m, k; scanf("%d %d %d", &n, &m, &k);
    int u(0), output(0);

    int *sockets = new int[n];
    for(int p = 0; p < n; p++){scanf("%d", sockets + p);}
    std::sort(sockets, sockets + n);


    if(m > k){
        int u; m -= k;
        for(u = n - 1; u >= 0; u--){
            m -= (sockets[u] - 1); 
            if(m <= 0){break;}}
        if(m <= 0){output = n - u;} else{output = -1;}
    }
    
    printf("%d\n", output);
    return 0;
}
