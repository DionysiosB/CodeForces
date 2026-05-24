#include <cstdio>
#include <algorithm>

const int D = 90;
const int T = 15;

int main(){

    int n; scanf("%d\n", &n);
    int ans(D);
    int current(0);
    while(n--){
        int x; scanf("%d", &x);
        if(current + T < x){break;}
        current = x;
    }

    ans = std::min(current + 15, D);

    printf("%d\n", ans);

    return 0;
}
