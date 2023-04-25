#include <cstdio>

int check(long x){

    int mn(9), mx(0);
    while(x){
        int d = x % 10; x /= 10;
        mn = (mn < d) ? mn : d;
        mx = (mx > d) ? mx : d;
    }

    return (mx - mn);
}

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long left, right; scanf("%ld %ld", &left, &right);
        long res(left), val(0);
        for(long p = left; p <= right && p <= left + 200; p++){
            int tst = check(p);
            if(tst > val){val = tst; res = p;}
        }

        printf("%ld\n", res);
    }

}
