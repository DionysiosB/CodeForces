#include <cstdio>
#include <vector>

int main(){

    const long N = 10;
    const long w[] = {-1000,1200,1400,1600,1900,2100,2300,2400,2600,3000};
    long x; scanf("%ld", &x);
    for(long p = N - 1; p > 0; p--){
        if(x >= w[p - 1]){printf("%ld\n", w[p]); break;}
    }

}
