#include <cstdio>
#include <cmath>

int main(){
    int x, y, z; scanf("%d %d %d", &x, &y, &z);
    printf("%.0f\n", 4*(sqrt(x * y / z) + sqrt(x * z / y) + sqrt(y * z / x)) );
    return 0;
}
