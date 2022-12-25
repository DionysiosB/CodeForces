#include<cstdio>
#include<vector>

int main(){

    const int N = 1e6 + 7;
    std::vector<long> f(N, 0);
    long mx=0;

    long n; scanf("%ld", &n);
    while(n--){
        long a; scanf("%ld",  &a);
        ++f[a];
        mx = (mx > f[a]) ? mx : f[a];
        for(long p = a; p < N ; p += a){f[p] = f[p] > f[a] ? f[p] : f[a];}
    }

    printf("%ld\n", mx);

    return 0;
}
