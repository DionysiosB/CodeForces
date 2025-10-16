#include <cstdio>

int main(){

    const int B = 107;

    int t; scanf("%d", &t);
    while(t--){
        bool v[B] = {0};
        int n; scanf("%d", &n);
        for(int p = 0; p < n; p++){int b; scanf("%d", &b); v[b] = 1;}
        int cnt(0); for(int p = 0; p < B; p++){cnt += v[p];}
        printf("%d\n", cnt);
    }

}
