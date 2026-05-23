#include <cstdio>

int main(){

    int socks, interval; scanf("%d %d\n", &socks, &interval);
    int day = 0;

    while(true){
        ++day;
        if(socks <= 0){break;}
        if(day % interval){--socks;}
    }

    printf("%d\n", day - 1);

    return 0;
}
