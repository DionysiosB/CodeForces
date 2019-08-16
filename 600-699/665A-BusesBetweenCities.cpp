#include <cstdio>
#include <iostream>

const int H = 60;

int main(){

    int a, ta; scanf("%d %d\n", &a, &ta);
    int b, tb; scanf("%d %d\n", &b, &tb);
    int hh, mm; scanf("%d:%d\n", &hh, &mm);
    int start = hh * H + mm;
    const int S = 5 * H + 0;
    const int F = 23 * H + 59;

    int count(0);
    for(int p = S; p <= F; p += b){if((p < start + ta) && (p + tb > start)){++count;}}
    printf("%d\n", count);

    return 0;
}
