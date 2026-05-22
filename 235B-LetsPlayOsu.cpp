#include<cstdio>

int main(){

    long n; scanf("%ld", &n);
    double ans(0), cur(0), prob;
    while(n--){double x; scanf("%lf",&x); cur *= x; ans += (2 * cur + x); cur += x;}

    printf("%.10lf\n",ans);

    return 0;
} 
