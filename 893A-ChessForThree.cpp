#include <cstdio>

int main(){

    int play[4] = {0};
    play[1] = play[2] = 1;
    long n; scanf("%ld", &n);
    bool res(true);
    for(long p = 0; p < n; p++){
        int win; scanf("%d", &win);
        if(!play[win]){res = false; break;}
        for(int u = 1; u <= 3; u++){
            if(u == win){continue;}
            play[u] = 1 - play[u];
        }
    } 

    puts(res ? "YES" : "NO");

    return 0;
}
