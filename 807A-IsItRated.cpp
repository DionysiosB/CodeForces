#include <cstdio>

int main(){

    int n; scanf("%d", &n);
    int prev(-1); bool unrated(false);
    while(n--){
        int a, b; scanf("%d %d", &a, &b);
        if(a != b){puts("rated"); return 0;}
        if((prev >= 0) && (a > prev)){unrated = true;}
        prev = a;
    }

    puts(unrated ? "unrated" : "maybe");

    return 0;
}
