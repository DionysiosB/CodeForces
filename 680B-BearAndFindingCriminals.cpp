#include <cstdio>
#include <vector>

int main(){

    int n, a; scanf("%d %d\n", &n, &a);
    std::vector<int> v(n + 1);
    for(int p = 1; p <= n; p++){scanf("%d ", &v[p]);}

    int ans(v[a]);
    for(int p = 1; p <= n; p++){
        if(a - p < 1  && a + p > n){break;}
        else if(a - p >= 1 && a + p <= n && v[a - p] == v[a + p]){ans += 2 * v[a - p];}
        else if(a - p >= 1 && a + p > n){ans += v[a - p];}
        else if(a - p < 1  && a + p <= n){ans += v[a + p];}
    }

    printf("%d\n", ans);

    return 0;
}
