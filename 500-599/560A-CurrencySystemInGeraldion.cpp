#include <cstdio>

int main(){

    int n; scanf("%d\n", &n);
    long ans(1);
    for(int p = 0; p < n; p++){
        long note; scanf("%ld\n", &note);
        if(note == 1){ans = -1; break;}
    }

    printf("%ld\n", ans);

    return 0;
}
