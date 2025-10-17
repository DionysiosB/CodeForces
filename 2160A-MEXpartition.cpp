#include <cstdio>

int main(){

    const int B = 107;
    int t; scanf("%d", &t);
    while(t--){
        int n; scanf("%d", &n);
        bool v[B] = {0};
        for(int p = 0; p < n; p++){
            int x; scanf("%d", &x);
            v[x] = 1;
        }

        int ans(0);
        for(int p = 0; p < B; p++){if(!v[p]){ans = p; break;}}
        printf("%d\n", ans);
    }

}
