#include <cstdio>

int main(){

    long H = 60;
    long n, s; scanf("%ld %ld", &n, &s);
    long res(0);
    while(n--){
        long h, m; scanf("%ld %ld", &h, &m);
        long time = h * H + m;
        if(time - res >= s + 1){break;}
        res = time + s + 1;
    }

    printf("%ld %ld\n", res / H, res % H);

    return 0;
}
