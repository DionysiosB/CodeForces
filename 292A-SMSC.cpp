#include <cstdio>

int main(){

    int n(0); scanf("%d", &n);
    long c(0), t(0), q(0), maxSize(0),previousTime(0), lastTime(0), finalTime(0);
    while(n--){
        scanf("%ld %ld", &t, &c);
        if(t < lastTime){q += c - (t - previousTime); lastTime += c;}
        else{q = c; lastTime = t + c;}
        if(q > maxSize){maxSize = q;}
        if(lastTime > finalTime){finalTime = lastTime;}
        previousTime = t;
    }
    printf("%ld %ld\n", finalTime, maxSize);
    return 0;
}
