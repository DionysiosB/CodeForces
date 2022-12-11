#include <cstdio>
#include <vector>

int main(){

    int n; scanf("%d", &n);
    std::vector<int> a(n + 1);
    int l(-1), r(-1);

    for(int p = 1; p <= n; p++){
        scanf("%d", &a[p]);
        if(p != a[p]){
            if(l < 0){l = p;}
            r = p;
        }
    }

    if(l < 0){puts("0 0"); return 0;}
    for(int p = l; p <= r; p++){if(a[p] != l + r - p){puts("0 0"); return 0;}}
    printf("%d %d\n", l, r);

    return 0;
}
