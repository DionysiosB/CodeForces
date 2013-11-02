#include <cstdio>
#include <iostream>
using namespace std;

int main(){
    int n, s, t; scanf("%d %d %d", &n, &s, &t);
    int *p = new int[n + 1];
    for(int k = 1; k <= n; k++){scanf("%d", p + k);}
    int pos = s, swaps = 0;
    for(int k = 0; k < n; k++){
        if(pos == t){break;}
        else{pos = p[pos]; swaps++;}
    }
    if(pos != t){swaps = -1;}
    printf("%d\n", swaps);
    return 0;
}
