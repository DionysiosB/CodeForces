#include<cstdio>
#include<bitset>


int main(){
    const int N = 501;
    const int K = 501;

    int n,k; scanf("%d %d", &n, &k); 
    std::bitset<N> f[K];
    f[0][0] = 1;

    for(int p = 0; p < n; p++){
        int a; scanf("%d", &a);
        for(int v = k; v >= a; v--){f[v] |= (f[v - a] | (f[v - a] << a));}
    }

    printf("%zu\n", f[k].count());

    for(int p = 0;p <= k; p++){if(f[k][p]){printf("%d ", p);}}
    puts("");

    return 0;
}
