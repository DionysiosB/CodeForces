#include <cstdio>
#include <algorithm>

int main(){
    
    int n; scanf("%d", &n);
    long *radii = new long[n + 1];
    radii[0] = 0; for(int k = 1; k <= n; k++){scanf("%ld", radii + k);}
    std::sort(radii, radii + n + 1);

    double sum(0);
    for(int k = n; k > 0; k -= 2){sum += radii[k] * radii[k] - radii[k - 1] * radii[k - 1];}
    const double PI = 3.14159265359;
    sum *= PI;

    printf("%.10lf\n", sum);
    return 0;
}
