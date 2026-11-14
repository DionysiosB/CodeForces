#include <cstdio>

int main(){

    int t; scanf("%d", &t);
    while(t--){
        int k; scanf("%d", &k);
        int pair(0), triple(0);
        while(k--){
            int x; scanf("%d", &x);
            pair += (x >= 2);
            triple += (x >= 3);
        }

        puts((triple || (pair > 1)) ? "YES" : "NO");

    }

}
