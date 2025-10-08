#include <cstdio>
#include <vector>

int main(){

    long n, a, b; scanf("%ld %ld %ld", &n, &a, &b);
    std::vector<long> u(n, 0), v(n, 0);
    for(long p = 0; p < n; p++){
        if(p % 2 == 0){
            if(a > 0){u[p] = 1; --a;}
            else if (b > 0){v[p] = 1; --b;}
        }
        else if(p % 2 == 1){
            if(b > 0){v[p] = 1; --b;}
            else if(a > 0){u[p] = 1; --a;}
        }
    }

    for(long p = 0; a && p < n; p++){if(u[p]){u[p] += a; a = 0;}}
    if(a > 0){u[0] += a; a = 0;}
    for(long p = 0; b && p < n; p++){if(v[p]){v[p] += b; b = 0;}}
    if(b > 0){v[0] += b; b = 0;}
    long res(0); for(long p = 0; p < n; p++){res += (u[p] == v[p]);}

    printf("%ld\n", res);
    for(long p = 0; p < n; p++){printf("%ld:%ld\n", u[p], v[p]);}

    return 0;
}
