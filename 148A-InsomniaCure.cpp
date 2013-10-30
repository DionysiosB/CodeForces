#include <cstdio>
using namespace std;

int main(){
    int k,l,m,n; scanf("%d\n%d\n%d\n%d\n", &k, &l, &m, &n);
    long d; scanf("%ld\n",&d);
    long total = 0;
    for(int u = 1; u <= d; ++u){if( u % k == 0 || u % l == 0 || u % m == 0 || u % n == 0){++total;}}
    printf("%ld\n",total);
    return 0;
}
