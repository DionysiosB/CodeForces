#include <cstdio>
#include <iostream>

int findHp(int hy, int ay, int dy, int hm, int am, int dm){
    if(dm >= ay){return 1e7;}
    return ((hm + ay - dm - 1) / (ay - dm)) * (am - dy)+1;
}

int main(){

    int hy, ay, dy; scanf("%d %d %d\n", &hy, &ay, &dy);
    int hm, am, dm; scanf("%d %d %d\n", &hm, &am, &dm);
    int hc, ac, dc; scanf("%d %d %d\n", &hc, &ac, &dc);

    long res(1e7);
    for(int abuy = 200; abuy >= 0; abuy--){
        for(int dbuy = 100; dbuy >= 0; dbuy--){
            int cur = abuy * ac + dbuy * dc + std::max(findHp(hy, ay + abuy, dy + dbuy, hm, am, dm) - hy,0) * hc;
            res = (res < cur) ? res : cur;
        }
    }

    printf("%ld\n", res);

    return 0;
}
