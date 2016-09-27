#include <cstdio>


bool fbs(int a1, int d1, int a2, int d2){return a1 > d2 && d1 > a2;} //firstBeatsSecond
bool sbf(int a1, int d1, int a2, int d2){return a1 < d2 && d1 < a2;} //secondBeatsFirst

int main(){

    const int N = 4;
    int a[N], d[N];
    for(int p = 0; p < N; p++){scanf("%d %d\n", a + p, d + p);}

    if((fbs(a[0], d[1], a[2], d[3]) && fbs(a[0], d[1], a[3], d[2])) || (fbs(a[1], d[0], a[2], d[3]) && fbs(a[1], d[0], a[3], d[2]))){puts("Team 1");}
    else if((sbf(a[0], d[1], a[2], d[3]) || sbf(a[0], d[1], a[3], d[2])) && (sbf(a[1], d[0], a[2], d[3]) || sbf(a[1], d[0], a[3], d[2]))){puts("Team 2");}
    else{puts("Draw");}

    return 0;
}
