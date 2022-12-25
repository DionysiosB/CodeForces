#include <cstdio>

int main(){

    long a, b; scanf("%ld %ld\n", &a, &b);
    if(a < b){puts("-1");}
    else{printf("%.10lf\n", 1.0 * (a + b) / (2.0 * ((a + b) / (2 * b)))  );}

    return 0;
}
