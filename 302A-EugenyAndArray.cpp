#include <cstdio>

int main(){

    int n, m; scanf("%d %d", &n, &m);
    int minus(0), plus(0), temp(0);
    for(int k = 0; k < n; k++){
        scanf("%d",&temp);
        (temp > 0) ? (++plus) : (++minus);
    }

    int left(0), right(0), half(0);
    while(m--){
        scanf("%d %d", &left, &right);
        half = (right - left + 1) / 2;
        ((right - left)%2 && plus >= half && minus >= half) ? puts("1"): puts("0");
    }
    return 0;
}
