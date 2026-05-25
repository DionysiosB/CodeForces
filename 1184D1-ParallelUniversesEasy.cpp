#include <cstdio>

int main(){

    long length, pos, m, t; scanf("%ld %ld %ld %ld", &length, &pos, &m, &t);
    while(t--){
        long action, w; scanf("%ld %ld", &action, &w);
        if(action == 0){length -= ((w < pos) ? w : (length - w)); pos -= w * (w < pos);}
        else{++length; pos += (w <= pos);}
        printf("%ld %ld\n", length, pos);
    }

    return 0;
}
