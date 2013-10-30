#include <cstdio>

int main(){
    int n, m; scanf("%d %d", &n , &m);
    int b = 0, output = 0;
    for(int a = 0; a * a <= n ; a++){
        b = n - a * a;
        if(a + b * b == m){output++;}
    }
    printf("%d\n", output);
    return 0;
}
