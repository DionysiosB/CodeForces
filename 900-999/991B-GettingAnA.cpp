#include <cstdio>
#include <vector>
#include <cmath>

int main(){


    long n; scanf("%ld", &n);
    long req = ceil(4.5 * n);
    std::vector<long> v(6, 0);
    long s(0);
    for(long p = 0; p < n; p++){long x; scanf("%ld", &x); ++v[x]; s += x;}
    long rem = req - s;
    long ind(0), cnt(0);
    while(rem > 0){
        if(v[ind] > 0){--v[ind]; rem -= (5 - ind); ++cnt;}
        else{++ind;}
    }

    printf("%ld\n", cnt);

    return 0;
}
