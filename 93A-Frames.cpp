#include <cstdio>

int main(){

    long n, m, a, b; scanf("%ld %ld %ld %ld\n", &n, &m, &a, &b);
    --a; --b; 
    int ans(0);

    if(m == 1 || a / m == b / m || (a % m == 0 && (b % m == m - 1 || b == n - 1))){ans = 1;}
    else if(a % m == 0 || b % m == m - 1 || b == n - 1 || (m+b%m-a%m+1==b-a+1) || a%m==b%m+1){ans = 2;}
    else{ans = 3;}

    printf("%d\n", ans);

    return 0;
}
