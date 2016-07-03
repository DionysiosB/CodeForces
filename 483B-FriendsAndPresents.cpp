#include <cstdio>

int main(){

    long cnt1, cnt2, x, y; scanf("%ld %ld %ld %ld\n", &cnt1, &cnt2, &x, &y);

    long long left(0), mid(0), right(2e9);

    while(left < right){
        mid = (left + right) / 2;
        if((mid - mid / x >= cnt1) && (mid - mid / y >= cnt2) && (mid - mid /(x * y) >= cnt1 + cnt2)){right = mid;}
        else{left = mid + 1;}
    }

    printf("%ld\n", right);

    return 0;
}
