#include <cstdio>
typedef long long ll;

int main(){

    ll n, q; scanf("%lld %lld", &n, &q);
    while(q--){
        ll row, col; scanf("%lld %lld", &row, &col);
        ll res(0);
        if(n % 2 == 0){res = ((row + col) % 2) * (n * n / 2) + (n / 2) * (row - 1) + (col + 1) / 2;}
        else{res = ((row + col) % 2) * (n * n + 1) / 2 + ((row - 1) / 2) * n + (row % 2 == 0) * (n + 1 - ((row + col) % 2)) / 2 + (col + 1) / 2;}
        printf("%lld\n", res);
    }

    return 0;
}
