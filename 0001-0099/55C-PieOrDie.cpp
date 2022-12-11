#include <cstdio>

int main(){

    int n, m, k; scanf("%d %d %d\n", &n, &m, &k);
    for(int p = 0; p < k; p++){
        int x, y; scanf("%d %d\n", &x, &y);
        if(x <= 5 || x + 4 >= n || y <= 5 || y + 4 >= m){puts("YES"); return 0;}
    }

    puts("NO");

    return 0;
}
