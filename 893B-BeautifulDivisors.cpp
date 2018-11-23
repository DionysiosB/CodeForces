#include <cstdio>
#include <vector>

int main(){

    const int B = 14;
    std::vector<long> div;
    for(long p = 1; p < B; p++){long u = (1 << p); div.push_back((u - 1) * u / 2);}
    long n; scanf("%ld", &n);
    long res(0);
    for(long p = 0; p < div.size(); p++){if(n % div[p] == 0){res = div[p];}}
    printf("%ld\n", res);

    return 0;
}
