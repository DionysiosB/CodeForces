#include <cstdio>


unsigned long long choose(int x, int y){
    if(y == 0){return 1;}
    return x * choose(x - 1,y - 1) / y;
}


int main(){

    int n(0), m(0), t(0); scanf("%d %d %d", &n, &m, &t);
    unsigned long long result(0);
    for(int k = 4; k < t; k++){result += choose(n,k) * choose(m, t - k);}
    printf("%llu\n", result);
    return 0;
}
