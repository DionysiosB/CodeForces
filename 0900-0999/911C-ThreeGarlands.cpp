#include <cstdio>

int main(){

    int cnt[5] = {0, 0, 0, 0, 0};
    bool possible(false);
    for(int p = 0; p < 3; p++){
        int x; scanf("%d", &x); 
        if(x <= 4){++cnt[x];}
    }

    possible = (cnt[1] > 0) || (cnt[2] > 1) || (cnt[3] > 2) || (cnt[2] >= 1 && cnt[4] >= 2);
    puts(possible ? "YES" : "NO");

    return 0;
}
