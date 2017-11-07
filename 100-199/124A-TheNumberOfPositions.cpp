#include <cstdio>
#include <iostream>

int main(){
    int n, a, b; scanf("%d %d %d", &n, &a, &b);
    printf("%d\n", std::min(n - a,b + 1));
    return 0;
}
