#include <cstdio>
#include <vector>

int main(){

    int n, k; scanf("%d %d\n", &n, &k);
    std::vector<int> a(n);
    int m(101), M(0);
    for(int p = 0; p < a.size(); p++){
        scanf("%d", &a[p]);
        if(a[p] < m){m = a[p];}
        if(a[p] > M){M = a[p];}
    }

    if(M - m > k){puts("NO");}
    else{
        puts("YES");
        for(int p = 0; p < n; p++){
            for(int q = 1; q <= a[p]; q++){if(q <= m){printf("1 ");} else{printf("%d ", q - m);}}
            puts("");
        }
    }

    return 0;
}
