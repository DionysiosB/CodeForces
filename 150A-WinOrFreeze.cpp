#include <cstdio>
#include <cmath>
#include <vector>

int main(){

    long long n(0); scanf("%lld", &n);
    std::vector<long long> primeDecomp;

    long long source(n), test(2);
    while(source > 1 && test <= sqrt(n)){
        if(source % test == 0){primeDecomp.push_back(test); source /= test;}
        else{++test;}
    }
    if(source > 1){primeDecomp.push_back(source);}

    if(primeDecomp.size() <= 1){printf("1\n0");}
    else if(primeDecomp.size() == 2){puts("2");}
    else if(primeDecomp.size() > 2){printf("1\n%lld\n", primeDecomp[0] * primeDecomp[1]);}

    return 0;
}
