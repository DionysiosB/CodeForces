#include <cstdio>

bool lucky(int s, int u){

    int w = (s / 50) % 475;
    for (int p = 0; p < 25; p++){
        w = (w * 96 + 42) % 475;
        if(w + 26 == u){return true;}
    }

    return false;
}

int main(){

    int u, x, y; scanf("%d %d %d", &u, &x, &y);

    int res = (x % 50);
    while(res < y || !lucky(res, u)){res += 50;}
    printf("%d\n", (res <= x) ? 0 : (res - x + 99) / 100);
    return 0;
}
