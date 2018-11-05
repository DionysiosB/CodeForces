#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> v;
    long start(n <= 81 ? 1 : n - 81); 
    for(long p = start; p <= n; p++){
        long m(p), sd(0);
        while(m > 0){sd += m % 10; m /= 10;}
        if(p + sd == n){v.push_back(p);}
    }

    printf("%ld\n", v.size());
    for(long p = 0; p < v.size(); p++){printf("%ld\n", v[p]);}

    return 0;
}
